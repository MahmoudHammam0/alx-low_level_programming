#!/bin/bash
gcc *.o -fpic -shared -o million_lib.so
export LD_PRELOAD="$PWD/million_lib.so"
