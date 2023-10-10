#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to a new dog structure
 **/

dog_t *new_dog(char *name, float age, char *owner)

{

	int len1 = strlen(name);
	int len2 = strlen(owner);
	dog_t *new_location;

	new_location = (dog_t *)malloc(sizeof(dog_t));
	if (new_location == NULL)
	{
		return (NULL);
	}

	new_location->name = (char *)malloc((len1 + 1) * sizeof(char));
	new_location->owner = (char *)malloc((len2 + 1) * sizeof(char));
	if (new_location->name == NULL || new_location->owner == NULL)
	{
	free(new_location->name);
	free(new_location->owner);
	free(new_location);
	return (NULL);
	}

	strcpy(new_location->name, name);
	strcpy(new_location->owner, owner);
	new_location->age = age;

	return (new_location);
}
