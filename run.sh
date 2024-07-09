#!/bin/bash

# Compile program with pkg-config
gcc main.c -o araz_browser `pkg-config --cflags --libs gtk+-3.0` && \

# Run program
./araz_browser