#!/bin/bash
wget /tmp https://github.com/Kakazablone/alx-low_level_programming/blob/master/0x18-dynamic_libraries/randlib.so
export LD_PRELOAD=/tmp/randlib.so

