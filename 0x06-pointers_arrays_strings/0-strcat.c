#include "main.h"

/**
 * _strcat: concatenates two strings
 * @src: input value
 * @dest: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		src[i] = dest[j];
		i++;
		j++;
	}
	src[i] = '\0';
}
