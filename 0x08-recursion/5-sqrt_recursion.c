#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - recursively finds square root 
 * @n: number to calculate square root
 * @min: lower end of search range
 * @max: upper end of search range
 *
 * Return: square root of n
 * Else -1 if not found
 */
int find_sqrt(int n, int min, int max)
{
	int mid = (min + max) / 2;

	if (mid * mid == n)
		return (mid);
	if (min >= max)
		return (-1);

	if (mid * mid > n)
		return (find_sqrt(n, min, mid - 1));
	else
		return (find_sqrt(n, mid + 1, max));
}
