#include <stdio.h>

/**
* _atoi - Convert a string to an integer.
* @s: The input string.
*
* Return: The integer value represented by the string.
**/

int _atoi(char *s)

{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
	s++;
	}

	if (*s == '-' || *s == '+')
	{
	if (*s == '-')
	{
	sign = -1;
	}
	s++;
	}

		while (*s >= '0' && *s <= '9')
		{
		if (result > (2147483647 - (*s - '0')) / 10)
		{
			if (sign == 1)
			{
			return 2147483647;
			}
				else
				{
				return -2147483648;
				}
		}
		result = result * 10 + (*s - '0');
		s++;
		}

	return result * sign;
}
