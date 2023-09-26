#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog: prints a struct dog
 * @d: struct dog to print
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("No dog to print. \n");
		return;
	}

	name = (d-> != NULL) ? d->name : "(nil)";
	owner = (d->owner != NULL) ? d->owner : "(nil)";

	printf("Name: %s\nAge: %f\Owner: %s\n", name, d->age, owner);
}

