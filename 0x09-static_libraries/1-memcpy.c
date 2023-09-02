#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory copied from
 * @dest: copied memory stored
 * @n: number of bytes
 *
 * Return: copied memory with altered n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n --;
	}

	return (dest);
}
