#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 *
 * Return: 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
	{
		_pitchar('\n');
	}
}
