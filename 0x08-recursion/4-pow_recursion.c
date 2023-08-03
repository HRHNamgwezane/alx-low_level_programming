#include "main.h"

/**
 *  _pow_recursion - returns the value of x raised to the power of y
 *
 *  Return: if y < 0 (-1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return x *_pow_recrursion(x, y - 1);
	}
}
