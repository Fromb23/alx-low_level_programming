#!/bin/bash

# Compile each .c file to a corresponding .o file
for source_file in *.c; do
    object_file="${source_file%.c}.o"
    gcc -c "$source_file" -o "$object_file"
done

# Create the static library
ar rcs liball.a *.o

# Clean up the temporary .o files
rm -f *.o
