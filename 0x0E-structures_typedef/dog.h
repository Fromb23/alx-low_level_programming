#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a structure called 'dog'
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure defines the attributes of a dog.
 **/

typedef struct dog

{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
