#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *last_node, *temp_node;

	last_node = (listint_t *)malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (0);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		temp_node = *head;
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = last_node;
	}
	return (last_node);
}
