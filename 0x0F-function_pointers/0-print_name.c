#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints the name.
 **/

void print_name(char *name, void (*f)(char *))

{
	(*f)(name);
}
