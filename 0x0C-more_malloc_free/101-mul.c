#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 **/

int main(int argc, char *argv[])

{
	int num0, num1, i, j, mul_result;
	char *s1_argv, *s2_argv;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	s1_argv = argv[1];
	s2_argv = argv[2];
	for (i = 0; s1_argv[i] != '\0'; i++)
	{
		if (!isdigit(s1_argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (j = 0; s2_argv[j] != '\0'; j++)
	{
		if (!isdigit(s2_argv[j]))
		{
			printf("Eror\n");
			exit(98);
		}
	}
	num0 = atoi(argv[1]);
	num1 = atoi(argv[2]);

	mul_result = num0 * num1;

	printf("%d\n", mul_result);

	return (0);
}
