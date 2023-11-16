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
	list_t *new_node, *temp_node;

		new_node = (list_t *)malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		temp_node = *head;
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;

		return (new_node);
}
