#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 * data (n) in a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of the data in the linked list.
 **/

int sum_listint(listint_t *head)

{
	int sum_node = 0;

	while (head != NULL)
	{
		sum_node += head->n;
		head = head->next;
	}

	return (sum_node);
}
