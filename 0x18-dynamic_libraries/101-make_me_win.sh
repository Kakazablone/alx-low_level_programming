#!/bin/bash
wget /alx-low_level_programming/0x18-dynamic_libraries https://github.com/Kakazablone/alx-low_level_programming/blob/master/0x18-dynamic_libraries/randlib.so
export LD_PRELOAD=/alx-low_level_programming/0x18-dynamic_libraries/randlib.so
