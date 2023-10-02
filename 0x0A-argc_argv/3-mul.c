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
	char incorrect[] = "Error";
	int result;

	if (argc != 3)
	{
		printf("%s\n", incorrect);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		result = (a * b);

		printf("%d\n", result);
	}
	return (0);
}
