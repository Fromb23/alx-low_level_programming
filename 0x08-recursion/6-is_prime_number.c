#include "main.h"
#include <stdio.h>

int is_prime_number(int n);

int is_prime_recursive(int n, int i);

/**
* is_prime_recursive - Recursive function to check for prime numbers
* @n: The number to check
* @i: The current divisor to check
*
* Return: 1 if n is prime, 0 otherwise
**/

int is_prime_recursive(int n, int i)

{
	if (i * i > n)
	{
		return (1);
	}
			if (n % i == 0)
			{
				return (0);
			}
	return (is_prime_recursive(n, i + 1));
}

/**
* is_prime_number - Check if a number is prime
* @n: The number to check
*
* Return: 1 if n is prime, 0 otherwise
**/

int is_prime_number(int n)

{
		if (n <= 1)
		{
			return (0);
		}
	return (is_prime_recursive(n, 2));
}
