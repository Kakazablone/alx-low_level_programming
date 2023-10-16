#!/bin/bash
wget -P /tmp https://github.com/Kakazablone/alx-low_level_programming/blob/master/0x18-dynamic_libraries/makewin.so
export LD_PRELOAD=/tmp/makewin.so
