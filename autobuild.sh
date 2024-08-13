#!/bin/bash
set -e

cd "$(dirname "${BASH_SOURCE[0]}")"


rm -rf build/*
cd build &&
	cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1&&
	make
