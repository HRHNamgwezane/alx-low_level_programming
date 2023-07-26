#include "main.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: string to be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int count = 0, x;

	while (*str)
	{
		count++;
		str++;
	}

	for (x = 0; x < count; x++)
		str--;
	x = (count % 2 == 0) ?count / 2 : (count + 1) / 2;
	for (; x < count; x++)
		_putchar(str[x]);
	_putchar('\n');
}
