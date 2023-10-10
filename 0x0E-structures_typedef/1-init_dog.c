#include "dog.h"

/**
 * init_dog - Initialize a struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to dog's name string
 * @age: Age of the dog
 * @owner: Pointer to owner's name string
 *
 * Description: This function initializes a struct dog with
 * the provided values for name, age, and owner.
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
