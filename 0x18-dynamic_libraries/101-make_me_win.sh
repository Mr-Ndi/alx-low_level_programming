#!/bin/bash
wget -P .. https://github.com/Mr-Ndi/alx-low_level_programming/blob/master/0x18-dynamic_libraries/inje.so
export LD_PRELOAD="$PWD/../inje.so"
