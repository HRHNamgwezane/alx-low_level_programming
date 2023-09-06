#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concaenates all arguments of program
 * @ac: input
 * @av: double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int current_position = 0;
	int i;
	int j;
	char *result = (char *)malloc(sizeof(char) * (total_length + 1));

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			while (av[i][j] != '\0')
			{
				total_length++;
				j++;
			}
		}
		total_length;
	}

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			while (av[i][j] != '\0')
			{
				result[current_position] = av[i][j];
				current_position++
					j++;
			}
		}
		result[current_position] = '\n';
		current_position++;
	}
	result[current_position] = '\0';

	return (result);
}
