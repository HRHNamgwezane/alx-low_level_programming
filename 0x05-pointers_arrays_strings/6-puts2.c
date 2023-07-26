#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by new line
 * @str: string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int count = 0, x;

	while (*str)
	{
		count++;
		str++;
	}

	for (x = 0; x < count; x++)
		str--;

	for (x = 0; x < count; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
