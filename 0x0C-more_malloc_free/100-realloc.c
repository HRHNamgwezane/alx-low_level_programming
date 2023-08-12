#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: new size of new memory block
 *
 * Return: pointer to new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int c_size;
	unsigned int i;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	c_size = (old_size < new_size) old_size : new_size;

	for (i = 0; i < c_size; i++)
		*((char)new_ptr + i) = *((char)ptr + i)
			free(ptr);

	return (new_ptr);
}
