#include "main.h"

/**
 * _strstr - finds first occurence of substring needle
 * in the string haystack
 * @haystack: string to check
 * @needle: string occurence checked in haystack
 *
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
