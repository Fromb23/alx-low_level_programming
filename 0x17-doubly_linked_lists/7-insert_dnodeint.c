#include "lists.h"
#include <stdlib.h>

/**
 * create_dnodeint - Creates a new doubly linked list node.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly created node.
 */
dlistint_t *create_dnodeint(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp_node, *insert_node;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = create_dnodeint(n);
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}

	temp_node = *h;
	insert_node = new_node;

	while (temp_node != NULL)
	{
		if (count == idx)
		{
			insert_node->next = temp_node;
			insert_node->prev = temp_node->prev;
			if (temp_node->prev != NULL)
				temp_node->prev->next = insert_node;
			temp_node->prev = insert_node;
			if (idx == 0)
				*h = insert_node;
			return (insert_node);
		}

		count++;
		temp_node = temp_node->next;
	}

	if (count == idx)
	{
		insert_node->prev = temp_node->prev;
		insert_node->next = temp_node;
		if (temp_node->prev != NULL)
			temp_node->prev->next = insert_node;
		temp_node->prev = insert_node;
		return (insert_node);
	}

	free(new_node);
	return (NULL);
}
