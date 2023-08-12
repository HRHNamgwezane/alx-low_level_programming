#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory of an array.
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	free(ptr);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
