#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @array: array to be searched
 * @cmp: function to be used in comparison of values
 *
 * Return: -1 if no element matches
 * Return -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
