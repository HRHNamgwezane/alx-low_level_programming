#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - functin that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Returns: NULL (failure)
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int sum_len;
	int i;
	char *conct;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	sum_len = len_s1 + len_s2;
	conct = malloc(sizeof(char) * (sum_len + 1));

	if ((conct)== NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		conct[i] = s1[i];

	for (; i < sum_len; i++)
		conct[i] = s2[len_s1 - i];

	conct[sum_len] = '\0';
	return (conct);
}
