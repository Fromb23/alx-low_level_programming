# C - Variadic Functions

## Resources
- [stdarg.h](https://en.cppreference.com/w/c/header/stdarg.h)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://en.cppreference.com/w/c/language/const)

## Learning Objectives
By the end of this project, you should be able to explain the following concepts to anyone without relying on external sources:

1. What are variadic functions in C?
2. How to use `va_start`, `va_arg`, and `va_end` macros for working with variadic functions.
3. The purpose and usage of the `const` type qualifier in C.

## Requirements

### General
- Editors allowed: vi, vim, emacs.
- Compilation on Ubuntu 20.04 LTS using gcc with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All source code files should end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- Your code should adhere to the [Betty style](https://github.com/holbertonschool/Betty).
- Avoid using global variables.
- No more than 5 functions per source code file.
- You are only allowed to use the C standard library functions `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, and `realloc` are forbidden.
- You can use the following macros: `va_start`, `va_arg`, and `va_end`.
- You are allowed to use `_putchar`.
- The `variadic_functions.h` header file should contain prototypes for all your functions, including the `_putchar` function.
- Don't forget to push your header file.
- Include guards should be used for all your header files.

## Project Structure

Your project should be structured as follows:

- `variadic_functions.h`: Header file with function prototypes.
- `_putchar.c`: Implementation of the `_putchar` function (if necessary).
- `0-sum_them_all.c`: A function that calculates the sum of all its parameters.
- `1-print_numbers.c`: A function that prints numbers separated by a given separator.
- `2-print_strings.c`: A function that prints strings separated by a given separator.
- `3-print_all.c`: A function that prints anything, depending on the format specifier.
- `README.md`: This file, containing project information.

## Example Statements (In README.md)

Now, let's add statements for each part of the project in your README.md file:

### `0-sum_them_all.c`

- Description: Write a function `sum_them_all` that calculates the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- Parameters:
  - `n`: The number of parameters that follow.
  - `...`: Variable number of integer parameters.
- Return: The sum of all the parameters.
- Usage Example:

```c
int result = sum_them_all(4, 1, 2, 3, 4); // Should return 10

