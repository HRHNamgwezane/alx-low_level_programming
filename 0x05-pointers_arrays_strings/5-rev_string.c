#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int count = 0, x = 0;
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}

	for (x = 0; x < count; x++)
		s--;
	for (x = 0; x < (count / 2); x++)
	{
		int last = count - 1;

		last_char = s[last - x];
		s[last - x] = s[x];
		s[x] = last_char;
	}
}
