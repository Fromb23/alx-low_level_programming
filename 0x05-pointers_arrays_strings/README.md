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

# Code Explanation: String Length

[2-strlen.c](./2-strlen.c)
## Overview

The C code defines a function named `_strlen` that calculates the length of a string. It takes a pointer to a character (`char *s`) as input and returns the length of the string.

## Code Description

- `int _strlen(char *s)`: This function accepts a pointer to a character as its parameter.

- Inside the function, it initializes a variable `length` to 0 to keep track of the string's length.

- Using a `while` loop, the code iterates through the characters in the string pointed to by `s` until it encounters the null terminator `'\0'`. During each iteration, it increments the `length` variable and advances the pointer `s` to the next character.

- Once the loop finishes, the function returns the calculated `length`, which represents the length of the input string.

## Usage

You can use the `_strlen` function to determine the length of a string by passing a pointer to the string as its argument.

## Conclusion

The `_strlen` function is a simple and useful utility for finding the length of a string in a C program.

# Code Explanation: Print String

[3-puts.c](./3-puts.c)
## Overview

The C code defines a function called `_puts` that prints a string to the standard output, followed by a newline character.

## Code Description

- `void _puts(char *str)`: This function takes a pointer to a character as input (representing the string to print).

- Inside the function, it iterates through the characters in the string using a `while` loop and prints each character using `_putchar`.

- After printing the entire string, a newline character `'\n'` is added to start a new line.

## Usage

The `_puts` function is useful for displaying strings on the console by passing a pointer to the string as an argument.

## Conclusion

In C programming, `_puts` simplifies the process of printing strings to the standard output, making it easy to display text.

## Author

Written by [Fromb23].

