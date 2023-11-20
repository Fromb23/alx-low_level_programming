#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to the head of the list
 * @n: Integer value for the new node
 *
 * Return: Address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
