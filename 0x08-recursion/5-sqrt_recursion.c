#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number.
 * @n: input value
 *
 * Return: squareroot, (-1) Error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return _sqrt_recursion(n, 1);
}
