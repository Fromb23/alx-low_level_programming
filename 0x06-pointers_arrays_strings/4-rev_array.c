#include "main.h"

/**
* reverse_array - Reverses the elements of an integer array.
* @a: The integer array.
* @n: The number of elements in the array.
**/

void reverse_array(int *a, int n)

{
	int i;
	int temporary;

	for (i = 0; i < n / 2; i++)
	{
		temporary = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temporary;
	}
}
