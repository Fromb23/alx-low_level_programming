#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if it fails.
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *first_node;

	first_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (first_node == NULL)
		return (NULL);

	first_node->n = n;

	if (*head == NULL)
	{
		*head = first_node;
		first_node->next = NULL;
		first_node->prev = NULL;
	}
	else
	{
		first_node->next = *head;
		(*head)->prev = first_node;
		*head = first_node;
	}

	return (first_node);
}
