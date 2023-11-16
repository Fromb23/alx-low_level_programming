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
	list_t *mem_allocation;

	if (head == NULL)
		return (NULL);

	mem_allocation = (list_t *)malloc(sizeof(list_t));
	if (mem_allocation == NULL)
		return (NULL);

	mem_allocation->str = strdup(str);
	if (mem_allocation->str == NULL)
	{
		free(mem_allocation);
		return (NULL);
	}
	mem_allocation->len = strlen(mem_allocation->str);
	mem_allocation->next = *head;
	*head = mem_allocation;

	return (mem_allocation);
}
