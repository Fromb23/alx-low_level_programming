# C - File I/O Project

## Table of Contents
- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Files and Directories](#files-and-directories)
- [Usage](#usage)
- [Style Guidelines](#style-guidelines)
- [Notes](#notes)
- [Authors](#authors)

## Description
This C project focuses on File I/O, covering concepts such as file descriptors, system calls (open, close, read, write), file permissions, and standard file descriptors. The project aims to enhance understanding of low-level file operations and the use of I/O system calls in a POSIX environment.

## Learning Objectives
At the end of this project, the learner is expected to:
- Look for the right source of information online
- Create, open, close, read, and write files using I/O system calls
- Understand file descriptors and their role in file operations
- Identify the 3 standard file descriptors, their purpose, and their POSIX names
- Use flags such as O_RDONLY, O_WRONLY, and O_RDWR in file operations
- Set file permissions when creating a file with the open system call
- Differentiate between a system call and a function

## Requirements
- Allowed Editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Files should end with a new line
- Mandatory README.md file
- Code should follow the Betty style
- No global variables
- Maximum 5 functions per file
- Limited use of C standard library functions (only malloc, free, and exit allowed)
- Allowed syscalls: read, write, open, close
- Use of _putchar is allowed

## Files and Directories
- [main.c](./main.c): Example main file for testing functions (not to be pushed)
- [main.h](./main.h): Header file with function prototypes
- [file_operations.c](./file_operations.c): Implementation of file operations functions
- [file_permissions.c](./file_permissions.c): Implementation of functions related to file permissions
- [holberton.h](./holberton.h): Private header file (if applicable, not always needed)

## Usage
To compile the project, use the following command:
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o file_io
