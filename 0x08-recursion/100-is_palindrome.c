#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string checked
 *
 * Return: 1 if string is palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: input string
 * @start: start index
 * @end: end index
 *
 * Return 1 if string is palindrome, else 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
