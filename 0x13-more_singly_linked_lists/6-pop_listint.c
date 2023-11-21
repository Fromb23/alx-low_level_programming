#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The data of the popped node, or -1 if the list is empty.
 **/

int pop_listint(listint_t **head)

{
	listint_t *delete_node;
	int temp_node;

	if (*head == NULL)
		return (-1);

	delete_node = *head;
	temp_node = delete_node->n;
	*head = (*head)->next;
	free(delete_node);

	return (temp_node);
}
