#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with name, age, and owner information
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define a typedef 'dog_t' for the struct 'dog' */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
