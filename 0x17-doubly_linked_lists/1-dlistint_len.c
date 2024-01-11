#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 **/

size_t dlistint_len(const dlistint_t *h)

{
	size_t count = 0;
	const dlistint_t *temp_node;

	temp_node = h;
	while (temp_node != NULL)
	{
		count++;
		temp_node = temp_node->next;
	}

	return (count);
}
