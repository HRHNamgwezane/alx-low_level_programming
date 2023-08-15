#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
			printf("Age: %1f\n", d->age);
			printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
