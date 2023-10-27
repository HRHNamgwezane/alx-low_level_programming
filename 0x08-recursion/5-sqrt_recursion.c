#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number using recursion
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
    return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function to find square root recursively
 * @n: number to calculate the square root of
 * @guess: current guess for square root
 *
 * Return: the resulting square root, or -1 if not found
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}
