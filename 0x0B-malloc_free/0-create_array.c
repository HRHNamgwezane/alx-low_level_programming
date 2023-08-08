#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars.
 * initializes with a specific char.
 * @size: Size of array
 * @c: char to fill array
 *
 * Return: Pointer to array. Otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;


	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
