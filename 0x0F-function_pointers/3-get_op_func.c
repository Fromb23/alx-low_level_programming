#include "3-calc.h"

/**
 * get_op_func - Get a function pointer for a given operation.
 * @s: The string representing the operation.
 *
 * Return: A function pointer to the corresponding operation function.
 **/

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	i++;
	}
	return (NULL);
}
