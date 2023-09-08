#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description -
*		This code assigns a random number to
*		the variable n each time it is executed
*		and produce the last digit of the random number.
* Return: Always 0 (SUCCESS)
**/
int main(void)

{
	int n;

	int r;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	r = n % 10;

	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}

	return (0);
}
