#include "main.h"

/**
 * prime_number- checks if a number is prime number using recursion
 * @n: number to check for primality
 * @d: the divisor for the recursive check
 *
 * Return: returns 1 if a number is prime, 0 otherwise
 **/

int prime_number(int n, int d)

{
	if (d == 1)
	{
		return (1);
	}
	else if (n % d == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, d - 1));
	}
}

/**
 * is_prime_number- checks if a number is prime using recursion
 * @n: number to check for primality
 *
 * Return: returns 1 if a number is prime, 0 otherwise
 **/

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, n / 2));
	}
}
