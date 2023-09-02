#include "main.h"

/**
 * _strcpy - copies string pointed to src
 * @src: string to compy from
 * @dest: string to copy to
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int p = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; p < l; p++)
	{
		dest[p] = src[p];
	}
	dest[l] = '\0';
	return (dest);
}
