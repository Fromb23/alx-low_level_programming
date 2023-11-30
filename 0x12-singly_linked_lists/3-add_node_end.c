#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: a pointer to the head ofa list
 * @str: a stirng to be dublicated and added to the new node.
 *
 * Return: The address of the new node, or NULL on failure
 **/

list_t *add_node_end(list_t **head, const char *str)

{
	unsigned int len;
	list_t *last_node, *temp_node;

	last_node = (list_t *)malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	else
		temp_node = *head;

	last_node->str = strdup(str);

	len = strlen(str);
	last_node->len = len;
	last_node->next = NULL;

	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = last_node;

	return (last_node);
}
