#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Integer less than, equal to, or greater
 *		than 0 if s1 is found to be
 *         less than, equal to, or greater than s2, respectively.
 **/

int _strcmp(char *s1, char *s2)

{
	int comparison;

	comparison =  strcmp(s1, s2);

	return (comparison);
}
