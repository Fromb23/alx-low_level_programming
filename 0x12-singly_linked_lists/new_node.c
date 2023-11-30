#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)

{
	unsigned int len;
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->str = str;

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	else
		new_node->str = strdup(new_node->str);

	len = strlen(str);

	new_node->len = len;
	*head = new_node;

	return (new_node);
}
