#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 on incorrect usage.
 **/

int main(int argc, char *argv[])

{
	int j;
	int zero = 0;
	int summation = 0;
	int add;
	char error[] = "Error";

	if (argc <= 1)
	{
		printf("%d\n", zero);
	}
		else
			{
			for (j = 1; j < argc; j++)
			{
				add = atoi(argv[j]);

					if (add < 0 || (add == 0 && argv[j][0] != '0'))
					{
					printf("%s\n", error);
					return (1);
					}
					else
					{
					if (argc < 2)
						{
						printf("%s\n", error);
						return (1);
						}
					else
					{
					summation += add;
					}
				}
			}

	printf("%d\n", summation);
	}
	return (0);
}
