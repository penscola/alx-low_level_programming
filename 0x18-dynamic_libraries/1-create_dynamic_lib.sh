#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into an object file
for file in $c_files; do
    gcc -c -fPIC $file -o "${file%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

echo "Dynamic library 'liball.so' created successfully."
