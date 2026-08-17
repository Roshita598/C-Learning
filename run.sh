#!/bin/bash

clang++ "$1.cpp" -o "$1"
./"$1"
