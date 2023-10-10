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
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age < 0)
		{
			printf("Age: (nil)\n");
		}

		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
