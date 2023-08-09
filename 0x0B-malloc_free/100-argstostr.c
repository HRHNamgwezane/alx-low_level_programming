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
	int index = 0;
	int sum_length = 0;
	char *conctd;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		sum_length += strlen(av[i]) + 1;

	conctd = malloc(sum_length + 1);

	if (conctd == NULL)
		return (NULL);

	for (j = 0; av[j][i] != '\0'; j++)
		conctd[index++] = av[j][i];

	conctd[index++] = '\n';

	conctd[index] = '\0';

	return (conctd);
}
