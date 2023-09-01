#include "main.h"

/**
 * _strlen_recursion - returns the lenghth of a string
 * @s: measured string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
