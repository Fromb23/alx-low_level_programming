# Project 0x0B - C malloc, free

## Summary

This project focuses on dynamic memory allocation in the C programming language using `malloc` and `free` functions. It covers topics such as automatic vs. dynamic allocation, the purpose of `malloc`, and how to use `valgrind` to check for memory leaks.

## Requirements

- Allowed editors: vi, vim, emacs
- Compilation using `gcc` with specific options.
- Files must end with a newline.
- A `README.md` file is mandatory.
- Code should follow the Betty style.
- No global variables allowed.
- Maximum of 5 functions per file.
- Only `malloc` and `free` from the C standard library are allowed.
- Use of `_putchar` is allowed.
- Do not push `_putchar.c`.
- Prototypes for functions and `_putchar` should be in `main.h`.

## Learning Objectives

By the end of this project, you should be able to explain:

1. The difference between automatic and dynamic allocation.
2. What `malloc` and `free` are and how to use them.
3. When and why to use `malloc`.
4. How to use `valgrind` to check for memory leaks.

## Files

1. `0-create_array.c`: A function that creates an array of characters.
2. `1-strdup.c`: A function that returns a pointer to a newly allocated space in memory, containing a copy of the given string.
3. `2-str_concat.c`: A function that concatenates two strings.
4. `3-alloc_grid.c`: A function that returns a pointer to a 2D array of integers.
5. `4-free_grid.c`: A function that frees a 2D grid previously created by `alloc_grid`.
6. `5-argstostr.c`: A function that concatenates all the arguments of your program.
7. `100-strtow.c`: A function that splits a string into words.

**Note:** The above files are examples, and you can adapt them to your project requirements.

## How to Compile

To compile the C files, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_program


##Author
Fromb32
