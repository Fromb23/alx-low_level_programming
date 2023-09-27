# Project Summary: C - Recursion

## General
- Understand what recursion is in programming.
- Learn how to implement recursion in the C programming language.
- Know when to use recursion and when not to use it.

## Requirements
- Allowed editors: vi, vim, emacs.
- Compilation on Ubuntu 20.04 LTS using `gcc` with specific options.
- All files must end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- Code must follow the Betty style and be checked using `betty-style.pl` and `betty-doc.pl`.
- Avoid using global variables.
- Limit the number of functions in each file to a maximum of 5.
- Do not use standard library functions like `printf` or `puts`; use `_putchar` instead.
- Do not include the `_putchar.c` file; it will be provided separately.
- Prototypes for functions and `_putchar` should be included in a header file named `main.h`.
- Push the header file to the repository.
- Avoid using loops and static variables in recursive functions.

## When to Use Recursion
- Recursion is suitable for solving problems that can be divided into smaller, similar subproblems.
- Common use cases include traversing tree structures, solving mathematical problems (e.g., factorial), and more.

## When Not to Use Recursion
- Avoid recursion for problems that can be solved more efficiently with loops to prevent high memory consumption and stack overflow errors.

## Testing
- You can use provided `main.c` files as examples to test your functions but do not need to push them to your repository. Evaluators will use their own `main.c` files for compilation.

