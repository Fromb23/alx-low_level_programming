#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 **/

void free_dlistint(dlistint_t *head)

{
	dlistint_t *free_node, *temp_node;

	if (head == NULL)
		return;

	free_node = head;
	while (free_node->next != NULL)
	{
		temp_node = free_node;
		free_node = free_node->next;
		free(temp_node);
	}
	free(free_node);
}
