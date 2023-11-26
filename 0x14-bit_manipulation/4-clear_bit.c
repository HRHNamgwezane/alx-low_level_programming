#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number
 * @index: Index of the bit to clear
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(mask << index);
	return (1);
}
