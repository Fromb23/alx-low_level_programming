0x05. C - Pointers, arrays and strings
# Learning Objectives

By the end of this project, you should be able to explain the following concepts without relying on external resources:

## General Knowledge

- **Pointers:** Understand what pointers are and how to utilize them effectively.
- **Arrays:** Comprehend the concept of arrays and their practical usage.
- **Differences:** Recognize the distinctions between pointers and arrays.
- **Strings:** Know how to work with strings and manipulate them.
- **Scope:** Understand the scope of variables within a program.
# Requirements

## General Guidelines

- **Editors Allowed:** You may use vi, vim, or emacs as your code editors.
- **Compilation Environment:** Ensure your code is compatible with Ubuntu 20.04 LTS, and compile it using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.
- **File Endings:** All code files should end with a new line.
- **Mandatory README:** Include a README.md file at the root of your project; it is a mandatory requirement.
- **Code Style:** Adhere to the Betty style for your code's style and formatting. Ensure your code passes checks using betty-style.pl and betty-doc.pl.
- **Global Variables:** Avoid using global variables.
- **Function Limit:** Each code file should contain no more than 5 functions.
- **Standard Library Functions:** Do not use standard library functions like printf, puts, etc., except for _putchar.
- **_putchar.c:** Do not push _putchar.c; it will be provided separately.
- **Header File:** Include function prototypes and _putchar in a header file named main.h. This header file must be pushed along with your code.

## Code Testing

- **Testing Files:** You can use the provided main.c files for testing, but you are not required to push them.
- **Compilation:** Compilation will use the provided main.c files, which may differ from the examples shown.


# Code Explanation: Reset to 98
## Code Link

[0-reset_to_98.c](./0-reset_to_98.c)

## Overview

This C code defines a function called `reset_to_98` with the purpose of modifying the value of an integer variable. It takes a pointer to an integer (`int *n`) as its parameter and sets the value in the memory location pointed to by `n` to 98.

## Code Description

- `void reset_to_98(int *n)`: This function is defined with a single parameter, which is a pointer to an integer (`int *n`).

- The function's main task is to change the value stored in the memory location pointed to by the parameter `n` and set it to 98.

## Usage

You can use this function to reset the value of an integer variable to 98 by passing a pointer to that variable as an argument to the `reset_to_98` function.

## Conclusion

The `reset_to_98` function provides a straightforward way to change the value of an integer variable by passing a pointer to it. It is a useful tool for modifying integer values within a C program.


# Swap Integers in C

## Code Link

[1-swap.c](./1-swap.c)

## Overview

This C program demonstrates swapping two integer variables (`a` and `b`) using a custom `swap_int` function.

## Explanation

- Includes `stdio.h` for input and output.
- Defines `swap_int` to swap two integer pointers.
- Initializes `a` to 98 and `b` to 42.
- Prints initial values and swaps using `swap_int`.
- Returns 0 for successful execution.

## Execution

- Compile with a C compiler (GCC).
- Run the resulting binary to observe value swaps.

## Author

Written by [Fromb23].

