#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code if there's a problem.
 **/

int main(int argc, char *argv[])

{
	int num0, num1, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num0 = atoi(argv[1]);
	num1 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(op)(num0, num1);

	return (result);
}
