#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	return (new_table);
}
