#ifndef __DATALOADER_WORK_QUEUE_H
#define __DATALOADER_WORK_QUEUE_H

#include <limits>
#include <queue>
#include <mutex>
#include <exception>
#include <mpi.h>
#include <thallium.hpp>

namespace tl = thallium;

class WorkQueue {

    public:

    class EmptyQueueException : public std::exception {
        
        public:

        const char* what() const noexcept {
            return "Work queue is empty";
        }
    };

    class ReadOnlyQueueException : public std::exception {

        public:

        const char* what() const noexcept {
            return "Work queue is read-only";
        }
    };

    WorkQueue(MPI_Comm comm)
    : m_comm(comm) {
        MPI_Comm_rank(comm, &m_rank);
        int size;
        MPI_Comm_size(comm, &size);
        m_num_remote_readers = size-1;
        m_num_remote_writers = size-1;
        if(m_rank == 0) {
            _spawn_listener_thread();
        }
    }

    ~WorkQueue() {
        _notify_close();
        if(m_is_open_for_writes) readonly();
        if(m_rank == 0 && m_es.size() == 1) {
            _join_listener_thread();
        }
    }

    void readonly() {
        if(!m_is_open_for_writes) return;
        if(m_rank == 0) {
            {
                std::unique_lock<tl::mutex> lock(m_queue_mtx);
                m_is_open_for_writes = false;
            }
            m_queue_cv.notify_one();
        } else {
            uint8_t msg = CLOSE_QUEUE_WR;
            MPI_Send(&msg, 1, MPI_UINT8_T, 0, 0, m_comm);
            m_is_open_for_writes = false;
        }
    }

    void push(const std::string& work) {
        if(!m_is_open_for_writes) throw ReadOnlyQueueException();
        if(m_rank == 0) {
            {
                std::unique_lock<tl::mutex> lock(m_queue_mtx);
                m_queue.push(work);
            }
            m_queue_cv.notify_one();
        } else {
            uint8_t msg = PUSH_WORK;
            MPI_Send(&msg, 1, MPI_UINT8_T, 0, 0, m_comm);
            uint64_t work_size = work.size();
            MPI_Send(&work_size, 1, MPI_UINT64_T, 0, 0, m_comm);
            MPI_Send(work.data(), work.size(), MPI_CHAR, 0, 0, m_comm);
        }
    }

    std::string pull() {
        if(m_rank == 0) {
            std::string result;
            {
                std::unique_lock<tl::mutex> lock(m_queue_mtx);
                while(m_queue.empty() && _has_writers()) {
                    m_queue_cv.wait(lock);
                }
                if(m_queue.empty() && !_has_writers()) throw EmptyQueueException();
                result = m_queue.front();
                m_queue.pop();
            }
            m_queue_cv.notify_one();
            return result;
        } else {
            uint8_t msg = PULL_WORK;
            MPI_Send(&msg, 1, MPI_UINT8_T, 0, 0, m_comm);
            uint64_t work_size = 0;
            MPI_Recv(&work_size, 1, MPI_UINT64_T, 0, 0, m_comm, MPI_STATUS_IGNORE);
            if(work_size == std::numeric_limits<uint64_t>::max())
                throw EmptyQueueException();
            std::string result(work_size, '\0');
            MPI_Recv(const_cast<char*>(result.data()), work_size, MPI_CHAR, 0, 0,
                     m_comm, MPI_STATUS_IGNORE);
            return result;
        }
    }

    private:

    enum MessageType {
        PUSH_WORK,      // push work to the queue
        PULL_WORK,      // pull work from the queue
        CLOSE_QUEUE_WR, // close the queue for writing
        CLOSE_QUEUE_RD  // close the queue for reading
    };

    // the following are relevant in all ranks
    MPI_Comm                 m_comm; // communicator
    int                      m_rank; // rank of current process
    bool                     m_is_open_for_writes = true; // this process can write

    // the following are relevant only in rank 0
    std::queue<std::string>  m_queue; // work queue
    tl::mutex                m_queue_mtx; // mutex for the work queue
    tl::condition_variable   m_queue_cv; // cond var for the work queue
    int                      m_num_remote_writers; // number of active writers
    int                      m_num_remote_readers; // number of active readers
    std::vector<tl::managed<tl::xstream>> m_es; // execution stream to use for background MPI communications

    void _spawn_listener_thread() {
        m_es.push_back(tl::xstream::create());
        m_es[0]->make_thread([this]() { _listen(); }, tl::anonymous());
    }

    void _join_listener_thread() {
        m_es[0]->join();
        m_es.clear();
    }

    bool _has_writers() const {
        return m_is_open_for_writes || (m_num_remote_writers > 0);
    }

    void _listen() {
        while((m_num_remote_readers > 0) || (m_num_remote_writers > 0)) {
            uint8_t msg;
            MPI_Status status;
            MPI_Recv(&msg, 1, MPI_UINT8_T, MPI_ANY_SOURCE, 0, m_comm, &status);
            int source = status.MPI_SOURCE;
            switch(msg) {
                case PUSH_WORK:
                    _handle_push_work(source);
                    break;
                case PULL_WORK:
                    _handle_pull_work(source);
                    break;
                case CLOSE_QUEUE_WR:
                    _handle_remove_writer();
                    break;
                case CLOSE_QUEUE_RD:
                    _handle_remove_reader();
                    break;
            }
        }
    }

    void _handle_push_work(int source) {
        {
            std::unique_lock<tl::mutex> lock(m_queue_mtx);
            uint64_t work_size = 0;
            MPI_Recv(&work_size, 1, MPI_UINT64_T, source, 0, m_comm, MPI_STATUS_IGNORE);
            std::string work(work_size, '\0');
            MPI_Recv(const_cast<char*>(work.data()), work_size, MPI_CHAR, source, 0,
                     m_comm, MPI_STATUS_IGNORE);
            m_queue.push(std::move(work));
        }
        m_queue_cv.notify_one();
    }

    void _handle_pull_work(int source) {
        std::string work;
        {
            std::unique_lock<tl::mutex> lock(m_queue_mtx);
            while(m_queue.empty() && _has_writers()) {
                m_queue_cv.wait(lock);
            }
            if(m_queue.empty() && !_has_writers()) {
                uint64_t work_size = std::numeric_limits<uint64_t>::max();
                lock.unlock();
                m_queue_cv.notify_one();
                MPI_Send(&work_size, 1, MPI_UINT64_T, source, 0, m_comm);
                return;
            } else {
                work = m_queue.front();
                m_queue.pop();
            }
        }
        m_queue_cv.notify_one();
        uint64_t work_size = work.size();
        MPI_Send(&work_size, 1, MPI_UINT64_T, source, 0, m_comm);
        MPI_Send(work.data(), work_size, MPI_CHAR, source, 0, m_comm);
    }

    void _handle_remove_reader() {
        {
            std::unique_lock<tl::mutex> lock(m_queue_mtx);
            m_num_remote_readers -= 1;
        }
        m_queue_cv.notify_one();
    }

    void _handle_remove_writer() {
        {
            std::unique_lock<tl::mutex> lock(m_queue_mtx);
            m_num_remote_writers -= 1;
        }
        m_queue_cv.notify_one();
    }

    void _notify_close() {
        if(m_rank != 0) {
            uint8_t msg = CLOSE_QUEUE_RD;
            MPI_Send(&msg, 1, MPI_UINT8_T, 0, 0, m_comm);
        }
    }
};

#endif
