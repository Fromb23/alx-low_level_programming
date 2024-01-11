#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 **/

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
