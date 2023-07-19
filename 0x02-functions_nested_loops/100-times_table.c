#include "main.h"

/**
 * print_times_table - printa the n times table starting with 0.
 * @n: the value of the times table to be counted.
 */
void print_times_table(int n)
{
	int num;
	int mult;
	int prod;

	if (n >= 0 && n <= 15)
	{
		_putchar('0');

		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 99)
				_putchar(' ');

			if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar((prod / 10)) % 10 + '0')
			}

			else if (prod <= 99 && prod >= 10)
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
