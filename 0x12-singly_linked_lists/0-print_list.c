#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Print the elements of a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 **/

size_t print_list(const list_t *h)

{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s\n", h->str);
			printf("%u\n", h->len);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
