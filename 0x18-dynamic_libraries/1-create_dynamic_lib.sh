#!/bin/bash
gcc -Wall -Werror -fPIC -c *.c
gcc -shared -o libholberton.so *.o
