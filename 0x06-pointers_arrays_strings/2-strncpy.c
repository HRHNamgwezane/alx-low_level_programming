#include "main.h"

/**
 * _strncpy: copies a string.
 * @src: input value
 * @dest: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i];

	while (i < n)
	{
		dest[i] != '\0';
		i++;
	}
	return (dest);
}
