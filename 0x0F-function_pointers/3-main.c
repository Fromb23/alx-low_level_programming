#include <stdio.h>
#include <string.h>

int main(int argc, char(*argv[]))

{
	int nu1, nu2;
	int operation, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		nu1 = atoi(argv[1]);
		nu2 = atoi(argv[2]);
	}

	if (strcmp(argv[3], "+") == 0)
	{
		operation = 0;
	}
	else if (strcmp(argv[3], "-") == 0)
	{
		operation = 1;
	}
	else if (strcmp(argv[3], "*") == 0)
	{
		operation = 2;
	}
	else if (strcmp(argv[3], "/") == 0)
	{
		operation = 3;
	}
	else if (strcmp(argv[3], "%") == 0)
	{
		operation = 4;
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	if ((operation == 3 || operation == 4) && nu2 == 0 || operation < 0 || operation >= sizeof(ops) / sizeof(ops[0]))
	{
	printf("Error\n");
	exit(100);
	}

	result = ops[operation](nu1, nu2);

	printf("Result: %d\n", result);

	return (result);
}
