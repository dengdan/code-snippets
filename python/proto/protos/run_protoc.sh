#!/usr/bin/env bash

set -e
echo $0
cd "$(dirname "$0")"
echo "Compiling protos in $(pwd)"
cd ..
protoc protos/*.proto --python_out=.
echo 'Done'