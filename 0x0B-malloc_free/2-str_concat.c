#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 steings
 * @s1: string to concat
 * @s2: string to concat
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result = malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	if (result == NULL)
		return(NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

