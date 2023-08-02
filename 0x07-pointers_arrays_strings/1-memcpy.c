#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: source memory area.
 * @dest: destination memory area.
 * @n: number of bytes to be copies.
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	{
		for (x = 0; x < n; x++)
		dest[x] = src[x];
	}
	return (dest);
}
