#include "main.h"

/**
 * _pow - calculates the power of a number
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: result of base^power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;

	for (unsigned int i = 0; i < power; i++)
		result *= base;

	return (result);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	
	int flag = 0;
	
	for (int i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		unsigned long int mask = _pow(2, i);
		int bit = (n & mask) ? 1 : 0;

		if (bit || flag)
		{
			_putchar(bit + '0');
			flag = 1;
		}
	}
}
