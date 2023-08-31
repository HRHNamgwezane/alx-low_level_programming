#include "main.h"

/**
 * _puts_recurssion - prints a string followed by a new line.
 * @s: input
 * Return: (Success) 0
 */
void _puts_recurssion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recurssion(s + 1);
}
