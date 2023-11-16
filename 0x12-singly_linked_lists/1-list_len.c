#include "lists.h"
/**
 * list_len - count the number of elements in the linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of elements in the linked list
 **/

size_t list_len(const list_t *h)

{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
