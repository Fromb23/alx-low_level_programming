#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description -
*		This code assigns a random number to
*		the variable n each time it is executed
* Return: Always 0 (SUCCESS)
**/
int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
	printf("%d is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("%d is 0\n", n);
	}
	else
	{
	printf("%d is less than 6 but not 0\n", n);
	}

	return (0);
}
