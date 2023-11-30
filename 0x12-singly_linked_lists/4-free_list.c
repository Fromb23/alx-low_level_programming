#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free a linked list
 * @head : a pointer to the head of the list
 *
 **/

void free_list(list_t *head)

{
	list_t *node_temp;

	while (head != NULL)
	{
		node_temp = head;
		head = head->next;
		free(node_temp);
	}
}
