#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input value
 *
 * Rerurn: 1 (success), 0 (error)
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		{
			return (0);
		}
		start++;
		end--;
	}
	return (1);
}
