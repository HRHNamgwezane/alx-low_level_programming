#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: character to be located
 * @s: string to be searched
 *
 * Return c or null
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);

		if (!*s)
			return (NULL);
	}
	return (NULL);
}
