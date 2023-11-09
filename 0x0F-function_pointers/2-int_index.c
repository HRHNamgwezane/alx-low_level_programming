#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element in the array
 * that satisfies the condition provided by the cmp function.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element that satisfies the condition,
 * or -1 if no such element is found or if size <= 0.
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
