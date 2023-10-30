#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * min_coins - Calculates the minimum number of coins
 * for a given amount in cents
 * @cents: The amount in cents to calculate coins for
 *
 * Return: The minimum number of coins needed
 **/

int min_coins(int cents)

{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int count_coin = 0;
	int len_coins = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < len_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count_coin++;
		}
	}
	return (count_coin);

}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 **/

int main(int argc, char *argv[])

{
	int cent0, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent0 = atoi(argv[1]);

	if (cent0 < 0)
	{
		printf("0\n");
		return (0);
	}

	change = min_coins(cent0);
	printf("%d\n", change);

	return (0);
}
