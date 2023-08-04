#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number.
 * @n: input value
 *
 * Return: squareroot, (-1) Error
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	else if (i * i == n)
	{
		return (i);
	}

	else
	{
		return _sqrt_recursion(n, i + 1);
	}
}
