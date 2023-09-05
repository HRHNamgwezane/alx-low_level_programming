#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * initializes it with a specific char
 * @c: char to assign
 *
 * Return: pointer to array, NULL of fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);


	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
