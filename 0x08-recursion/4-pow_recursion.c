#include "main.h"

/**
 * _pow_recursion_helper - helper function for tail-recursive power calculation
 * @x: base value
 * @y: power
 * @result: accumulated result
 *
 * Return: result of x^y
 */
int _pow_recursion_helper(int x, int y, int result)
{
	if (y == 0)
		return (result);
	return (_pow_recursion_helper(x, y - 1, result * x));
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (_pow_recursion_helper(x, y, 1));
}
