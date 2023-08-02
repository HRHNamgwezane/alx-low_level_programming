#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: input
 *
 * Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len, j;
	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				len++;
			}
	}
	else
		return (len);
}
