#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print information about a dog
 * @d: Pointer to struct dog
 *
 * Description: This function prints information about a struct dog,
 * including its name, age, and owner. If the provided pointer is NULL,
 * it prints "nil".
 **/

void print_dog(struct dog *d)

{
	if (d == NULL)
	{
	printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
}
