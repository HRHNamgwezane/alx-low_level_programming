#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: int to check
 * Return: 1 and print + if n greater than 0
 * -1 and print - if n less than 0
 *  0 and print 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
