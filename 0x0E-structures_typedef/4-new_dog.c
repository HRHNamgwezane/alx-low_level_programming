#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog 
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	dog->owner = strdup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
