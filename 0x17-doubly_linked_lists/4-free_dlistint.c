#include "lists.h"

void free_dlistint(dlistint_t *head)

{
	dlistint_t *free_list, *temp_node;

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
