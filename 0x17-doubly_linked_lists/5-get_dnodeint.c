#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the nth node, or NULL if it doesn't exist.
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	unsigned int count = 0;
	dlistint_t *nth_node;

	if (head == NULL)
		return (NULL);

	nth_node = head;
	while (nth_node != NULL)
	{
		if (count == index)
			return (nth_node);
		count++;
		nth_node = nth_node->next;
	}
	return (NULL);
}
