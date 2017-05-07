#!/bin/sh
set -eu

cd -- "$(dirname -- "$0")"
mkdir -p build
cd build
cmake -Dtest=ON ..
make
cd test
ctest -V
