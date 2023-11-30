#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - add node to the beginning of a linked list
 * @head: a pointer to a pointer to the head of a link
 * @str: The string to be added to the new node
 *
 * Return: a pointer to the newly created node, or NULL if failure
 **/

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
	unsigned int len;

	if (head == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	len = strlen(str);
	new_node->len = len;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
