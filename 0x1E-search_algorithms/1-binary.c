#include "search_algos.h"

/**
 * binary_search - Performs a binary search on an array.
 * @array: The array to search.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value,
 *         or -1 if the value is not found.
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			{
				printf("%d", array[i]);
				if (i < end && (i + 1 != mid || i == mid - 1))
				{
					printf(", ");
				}
			}
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
