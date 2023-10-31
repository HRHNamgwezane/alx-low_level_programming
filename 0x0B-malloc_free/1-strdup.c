#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: input string
 * Return: pointer to duplicated string, NULL if str is NULL
 * or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;
	duplicate = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
