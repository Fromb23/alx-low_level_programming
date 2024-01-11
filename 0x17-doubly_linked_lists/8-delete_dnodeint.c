#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a given index
 * in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	unsigned int count = 0;
	dlistint_t *temp_node;

	if (*head == NULL)
		return (-1);

	temp_node = *head;

	if (index == 0)
	{
		*head = temp_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp_node);
		return (1);
	}
	while (temp_node != NULL)
	{
		if (count == index)
		{
			if (temp_node->next != NULL)
				temp_node->next->prev = temp_node->prev;
			if (temp_node->prev != NULL)
				temp_node->prev->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		count++;
		temp_node = temp_node->next;
	}

	return (-1);
}
