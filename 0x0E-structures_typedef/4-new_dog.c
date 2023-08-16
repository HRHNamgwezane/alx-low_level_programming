#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: to be copied and stored
 * @owner: to be copied and stored
 *
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = strdup(name);

	newDog->name = malloc(sizeof(strdup(name) + 1));
	if (newDog->name == NULL)
	{
		free(name);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = strdup(owner);

	newDog->owner = malloc(sizeof(strdup(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(owner);
		return (NULL);
	}
	return (newDog);
}
