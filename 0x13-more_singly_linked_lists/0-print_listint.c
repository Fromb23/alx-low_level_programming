#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list if success and -1 if unsuccesful
 **/

size_t print_listint(const listint_t *h)

{
	size_t count = 0;


	if (h == NULL)
	{
		return (-1);
	}
	else
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count += 1;
		}
	}
	return (count);
}
