#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 *
 * Return: (1) or (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return is_prime_number_recursion(n - 1);
}