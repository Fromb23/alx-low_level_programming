#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0 (Success)
 **/

int main(int argc, char *argv[])

{
	int num0, i;
	unsigned char *ptr_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num0 = atoi(argv[1]);
	if (num0 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr_bytes = (unsigned char *)main;
	for (i = 0; i < num0 - 1; i++)
	{
		ptr_bytes++;
		printf("%02x ", *ptr_bytes);
	}
	printf("%02x\n", *ptr_bytes);
	return (0);
}
