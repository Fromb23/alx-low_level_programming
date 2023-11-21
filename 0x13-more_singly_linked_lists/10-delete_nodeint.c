#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *temp_node, *temp_node2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	else
	{
		temp_node = *head;
		while (count < index - 1)
		{
			temp_node = temp_node->next;
			count += 1;
		}
		if (temp_node->next == NULL)
			return (-1);
		temp_node2 = temp_node;
		temp_node = temp_node->next;
		temp_node2->next = temp_node->next;
		free(temp_node);
	}

	return (1);
}
