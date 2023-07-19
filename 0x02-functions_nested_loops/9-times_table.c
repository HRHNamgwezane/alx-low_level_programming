#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0.
 */
void times_table(void)
{
	int i, number = 9;

	for (i = 0; i <= 12; i++)
	{
		_putchar("%d X %d = %d \n", number, i, (number * i))
	}
	return (0);
}
