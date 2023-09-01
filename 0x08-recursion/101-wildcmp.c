#include "main.h"

/**
 * wldcmp - compares strings
 * @s1: input string
 * @s2: input string
 *
 * Return: i if strings identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)));

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
