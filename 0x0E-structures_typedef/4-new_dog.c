#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure
 **/

dog_t *new_dog(char *name, float age, char *owner)

{
	char *name_copy, *owner_copy;
	dog_t *memory_allocation;

	memory_allocation = malloc(sizeof(dog_t));
	if (memory_allocation == NULL)
		return (NULL);

	name_copy = strdup(name);
	owner_copy = strdup(owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(memory_allocation);
		return (NULL);
	}

	memory_allocation->name = name_copy;
	memory_allocation->age = age;
	memory_allocation->owner = owner_copy;

	return (memory_allocation);
}
