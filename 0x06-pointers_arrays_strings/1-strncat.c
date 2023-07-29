#include "main.h"

/**
 * _strncat: concatenates two strings. Return pointer to the resulting string.
 * @src: input value
 * @dest: input valu
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	 int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
