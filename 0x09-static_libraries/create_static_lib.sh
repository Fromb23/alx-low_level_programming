#!/bin/bash

# This script compiles all .c files in the current directory into object files,
# creates a static library named liball.a, and cleans up the
# temporary object files.

	for source_file in *.c; do
	object_file="${source_file%.c}.o"
	gcc -c "$source_file" -o "$object_file"
done

# Compile all .c files in the current directory into object files

ar rcs liball.a *.o

# Clean up: remove the temporary object files

rm *.o
