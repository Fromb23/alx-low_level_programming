#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Retrieves a node at
 * a specific index in a listint_t list.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired node (starting from 0).
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int count = 0;
	listint_t *temp_node;

	if (head == NULL)
		return (NULL);

	else
	{
		temp_node = head;
		while (count != index)
		{
			temp_node = temp_node->next;
			count += 1;
		}
	if (temp_node == NULL)
		return (NULL);
	else
		return (temp_node);
	}
}
