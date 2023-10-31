#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size and initializes it with char c
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the created array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
