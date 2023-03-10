#!/bin/bash

# Loop through all .c files in the current directory
for file in *.c
do
    # Compile each file using gcc -c
    gcc -c "$file"
done

