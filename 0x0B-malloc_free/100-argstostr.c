#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	int current_index = 0;
	char *result = malloc(total_length);

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			total_length++;
			arg++;
		}
		total_length++;
	}

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			result[current_index++] = *arg++;
		}
		result[current_index++] = (i == ac - 1) ? '\0' : '\n';
	}

	return (result);
}
