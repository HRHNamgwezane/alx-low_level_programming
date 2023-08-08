#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns pointer to a newly aloocated space memory
 * @str: string that is duplicated
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *new_string = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_string[i] = str[i];

	return (new_string);
}
