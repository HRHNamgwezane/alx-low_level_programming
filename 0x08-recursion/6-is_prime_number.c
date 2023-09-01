#include "main.h"

/**
 * is_prime_number - determines if integer is prime number
 * @n: number checked
 *
 * Return: if n is prime number 1
 * else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - helps to check if integer is a prime number
 * @n: number to check
 * @divisor: current divisor tested
 *
 * Return: 1 if n is prime, else 0
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (check_prime(n, divisor + 1));
}
