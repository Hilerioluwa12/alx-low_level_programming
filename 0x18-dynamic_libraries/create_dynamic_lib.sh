#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o libdynamic.so *.o
nm -D libdynamic.so
