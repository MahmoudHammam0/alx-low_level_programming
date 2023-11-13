#!/bin/bash
gcc *.o -shared -o million_lib.so
export LD_PRELOAD="./million_lib.so"
