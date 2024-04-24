#include <stdio.h>

/**
 * main - Entry point of the program
 *      This function prints "Fizz" for multiples of 3,
 *      "Buzz" for multiples of 5, "FizzBuzz" for both,
 *      and the number itself otherwise, from 1 to 100.
 *
 * Return: Always 0 for success
 **/

int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0)
			printf("Fizz ");
		else if (number % 5 == 0)
			printf("Buzz ");
		else if (number % 3  == 0 && number % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", number);
		number++;
	}
	printf("\n");

	return (0);
}
