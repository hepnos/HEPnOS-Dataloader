#!/bin/bash
set -e

export CRAYPE_LINK_TYPE=dynamic
HERE=`dirname "$0"`

module swap PrgEnv-intel PrgEnv-gnu
module load cce

echo "Setting up Spack"
git clone https://github.com/spack/spack.git
. spack/share/spack/setup-env.sh

echo "Setting up sds-repo"
git clone https://xgitlab.cels.anl.gov/sds/sds-repo.git
spack repo add sds-repo

echo "Copying packages.yaml file"
cp $HERE/theta-packages.yaml $HOME/.spack/cray/packages.yaml

echo "Installing HEPnOS"
spack install hepnos@develop

echo "Installing DIY"
spack install diy@master

echo "Installing HDF5"
spack install hdf5@1.10.1

echo "List of packages"
spack find

echo "Loading packages"
spack load -r hepnos
spack load -r diy
spack load -r hdf5

echo "Building HEPnOS DataLoader"
mkdir build
cd build
cmake .. -DCMAKE_CXX_COMPILER=CC
make
