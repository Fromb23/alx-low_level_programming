# Project: C - More Pointers, Arrays, and Strings

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without external help:

### General

1. **Pointers**:
   - Understanding pointers and their usage in C.

2. **Arrays**:
   - Utilizing arrays in C.

3. **Differences between Pointers and Arrays**:
   - Recognizing distinctions between pointers and arrays in C.

4. **Strings**:
   - String manipulation in C.

5. **Scope of Variables**:
   - Comprehending variable scope in C.

## Requirements

### General

- **Text Editors**: vi, vim, emacs are allowed for coding.
- **Compilation Environment**: Code will be compiled on Ubuntu 20.04 LTS using `gcc` with specified options.
- **Code Standards**: Follow Betty style guidelines and pass checks with `betty-style.pl` and `betty-doc.pl`.
- **No Global Variables**: Avoid using global variables.
- **Function Limit**: Keep the number of functions per file below 5.
- **Standard Library**: Do not use standard library functions like `printf`, `puts`, etc., except for `_putchar`.
- **Header File**: Include prototypes of functions and `_putchar` in `main.h`.
- **README.md**: Include a `README.md` file in the project folder.
- **New Lines**: Ensure files end with a new line.

*Note: You don't need to provide the `_putchar.c` file; it will be provided separately.*

*Note: You can use provided `main.c` files for testing purposes, but you don't have to include them in your repository.*

---

This project aims to deepen your understanding of pointers, arrays, strings, and variable scope in C. Ensure your code follows the specified guidelines and standards.

# Function Summary: `_strcat`

[0-strcat.c](./strcat.c)
The `_strcat` function concatenates two strings, `dest` and `src`, and returns a pointer to the resulting concatenated string. 

## Parameters
- `dest`: The destination string to which the source string will be appended.
- `src`: The source string that will be appended to the destination string.

## Return Value
- A pointer to the concatenated string.
- If memory allocation for the concatenated string fails, it returns `NULL`.

## Function Description
1. Calculate the total length required for the concatenated string, including both the destination and source strings, plus one additional character for the null-terminator.
2. Allocate memory for the concatenated string using `malloc`.
3. If memory allocation is successful (i.e., `concatenated` is not `NULL`), copy the contents of the `dest` string into the `concatenated` string using `strcpy`.
4. Use `strcat` to append the contents of the `src` string to the `concatenated` string.
5. Return a pointer to the concatenated string.

**Note:** The caller is responsible for freeing the memory allocated for the concatenated string when it is no longer needed.

Written by Fromb23
