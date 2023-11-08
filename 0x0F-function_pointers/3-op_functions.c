#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Add two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a plus b (a + b).
 **/

int op_add(int a, int b)

{
	int result_add;

	result_add = a + b;
	printf("%d\n", result_add);

	return (0);
}

/**
 * op_sub - Subtract two integers.
 * @a: The first integer (minuend).
 * @b: The second integer (subtrahend).
 *
 * Return: The result of a minus b (a - b).
 **/

int op_sub(int a, int b)

{
	int result_sub;

	result_sub = a - b;
	printf("%d\n", result_sub);

	return (0);
}

/**
 * op_mul - Multiply two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a multiplied by b.
 **/

int op_mul(int a, int b)

{
	int result_mul;

	result_mul = a * b;
	printf("%d\n", result_mul);

	return (0);
}

/**
 * op_div - Perform integer division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of a divided by b.
 **/

int op_div(int a, int b)

{
	int result_div;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		result_div = a / b;
		printf("%d\n", result_div);
	}
	return (0);
}

/**
 * op_mod - Calculate the modulus of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The modulus result of a divided by b.
 **/

int op_mod(int a, int b)

{
	int result_mod;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else if (b > a)
	{
		result_mod = a;
		printf("%d\n", result_mod);
	}
	else
	{
		result_mod = a % b;
		printf("%d\n", result_mod);
	}
	return (0);
}
