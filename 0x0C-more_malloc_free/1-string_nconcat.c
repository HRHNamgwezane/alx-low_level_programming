#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *conctd;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	conctd = malloc(sizeof(char) * (len1 + 1));
	if (conctd == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		conctd[i] = s1[i];

	for (j = 0; j < n; j++)
		conctd[1 + j] = s2[j];
	conctd[i + j] = '\0';

	return (conctd);
}
