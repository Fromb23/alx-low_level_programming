#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Description: This program generates a random integer,
*              assigns it to the variable 'n', and then prints
*              a message based on the value of 'n'.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	while (n != 0)
	{
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}

	n = rand() - RAND_MAX / 2;
	}

	printf("%d is zero\n", n);

	return (0);
}

