#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Returns: pointer to allocated memory otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	filler = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		filler[i] = 0;

	return (ptr);
}
