#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if it fails.
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *last_node, *temp_node;

	last_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);

	last_node->n = n;

	if (*head == NULL)
	{
		*head = last_node;
		last_node->next = NULL;
		last_node->prev = NULL;
	}

	temp_node = *head;
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = last_node;
	last_node->next = NULL;
	last_node->prev = temp_node;

	return (last_node);
}
