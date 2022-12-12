#!/bin/bash
wget -P .. https://github.com/Palanii1/alx-low_level-programming/blob/main/0x18-dynamic-libraries/libinjection.so
export LD_PRELOAD="$PWD/../libinjection.so"
