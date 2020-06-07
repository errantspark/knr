#!/bin/bash 
file="$1"
printf "## Compiling $file\n\n"
clang $file 
printf "\n## Executing ./a.out\n\n"
./a.out
