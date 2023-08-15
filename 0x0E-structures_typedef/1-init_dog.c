#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog.
 * @struct dog: variable type to initialize.
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to intialize
 * @d: pointer to struct dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
