#include "main.h"

/**
 * _strpbrk - finds the first character in a string
 * that matches a specified character in another string
 *
 * Return: 0 (success0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
