#!/bin/bash

# Compile all .c files in the current directory into liball.so
gcc -shared -o liball.so *.c
