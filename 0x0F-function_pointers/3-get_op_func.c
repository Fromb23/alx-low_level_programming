#include <stdio.h>
#include <string.h>

/**
 * struct op_s - Struct op_s for calculator operations
 *
 * @op: The operator
 * @func: The associated function
 **/

struct op_t ops[] =

{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i;
int (*get_op_func(char *s))(int, int);

{
	i = 0;

	while (ops[i].op != NULL)
	{

	if (strcmp(ops[i].op, s) == 0)
	{
		return (ops[i].func);
	}
	i++;
	}
	return (NULL);
}
