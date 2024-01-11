#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 **/

size_t print_dlistint(const dlistint_t *h)

{
	size_t count = 0;
	const dlistint_t *temp_node;

	temp_node = h;
	while (temp_node != NULL)
	{
		printf("%d\n", temp_node->n);
		count++;
		temp_node = temp_node->next;
	}

	return (count);
}
