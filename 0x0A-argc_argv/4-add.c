#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


/**
 * is_positive - Check if a string represents a positive integer.
 * @string: The string to check.
 *
 * Return: 1 if positive, 0 otherwise.
 **/

int is_positive(char *string)

{
	int j, num0;
	int len = strlen(string);

	if (*string == '\0')
	{
		return (false);
	}

	for (j = 0; j < len - 1; j++)
	{
		if (!isdigit(string[j]))
		{
			return (false);
		}
	}
	num0 = atoi(string);

	if (num0 > 0)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 **/

int main(int argc, char *argv[])

{
	int sum = 0, i, num1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (is_positive(argv[i]))
		{
			num1 = atoi(argv[i]);
			sum += num1;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	printf("%d\n", sum);
	return (0);
}
