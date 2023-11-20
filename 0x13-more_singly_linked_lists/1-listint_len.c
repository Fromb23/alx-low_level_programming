#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 **/

size_t listint_len(const listint_t *h)

{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		count += 1;
	}

	return (count);
}
