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
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	{
		for (int i = 0; i < n; i++)
		cdest[i] = csrc[i];
	}
	return (dest);
}
