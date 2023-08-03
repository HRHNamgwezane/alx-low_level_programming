#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * Return -1 (error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return n * _factorial(n - 1);
	}
}
