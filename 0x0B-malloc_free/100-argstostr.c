#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments in program
 * @ac: input value
 * @av: input value
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int conctd_len = 0;
	int sum_length = 0;
	char *conctd;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		sum_length += strlen(av[i]) + 1;

	conctd = malloc(sizeof(char)*(sum_length + 1));

	if (conctd == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j][i] != '\0'; j++)
			conctd[conctd_len++] = av[j][i];

		conctd[conctd_len++] = '\n';
	}
	conctd[conctd_len] = '\0';

	return (conctd);
}
