#include <stdio.h>
#include <stdlib.h>

/**
* main - This is the main Function of the program
*
* Descripition - This code print alphabetic letters in reverse order
*
* return: Always 0 (SUCCESS)
**/

int main(void)

{
	char alphabet = 'z';

	do

	{
	putchar(alphabet);
	alphabet--;
	}

	while

	(alphabet >= 'a');

	putchar('\n');

	return (0);
}
