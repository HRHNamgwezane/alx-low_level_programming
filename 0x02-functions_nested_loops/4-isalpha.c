#include "main.h"

/**
 * _isalpha - checks wether char is an alphabet
 * @c: char to be checked.
 * Return: (1) if c is alphabet, otherwise 0
 */
int _isalpha(int c)
{
	c = _isalpha('H');
	_putchar(c + '0');
	c = _isalpha('o');
	_putchar(c + '0');
	c = _isalpha(108);
	_putchar(c + '0');
	c = _isalpha(';');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}
