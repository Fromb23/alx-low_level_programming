#include "main.h"
#include <string.h>

/**
* rev_string - Reverses a string and prints the reversed string
* @s: The string to reverse and print.
**/

void rev_string(char *s)

{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
