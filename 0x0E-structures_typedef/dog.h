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

struct dog

{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - Initialize a struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to dog's name string
 * @age: Age of the dog
 * @owner: Pointer to owner's name string
 **/

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
