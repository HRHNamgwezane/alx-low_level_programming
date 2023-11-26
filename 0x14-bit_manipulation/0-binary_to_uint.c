#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_string: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with decimal value of binary number, or 0 if error.
 */
unsigned int binary_to_uint(const char *binary_string)
{
	int index;
	unsigned int result = 0;

	if (!binary_string)
		return (0);

	for (index = 0; binary_string[index] != '\0'; index++)
	{
		if (binary_string[index] != '0' && binary_string[index] != '1')
			return (0);
	}

	for (index = 0; binary_string[index] != '\0'; index++)
	{
		result <<= 1;
		if (binary_string[index] == '1')
			result += 1;
	}

	return (result);
}
