#include "main.h"

/**
 * *_strcpy - copies string pointe by src,
 * including terminating null byte
 * to th buffer pointed to by dest
 * @src: string being copied
 * Return: src
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, x;

	while (*src)
	{
		src++;
		count++;
	}

	for (x = 0; x < count; x++)
		src--;

	for (x = 0; x < count; x++)
	{
		dest[x] = *src;
		src++;
	}
	dest[x] = *src;

	return (dest);
}
