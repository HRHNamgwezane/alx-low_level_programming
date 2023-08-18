#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * int sum_them_all - returns the sum of all parameters.
 * @n: number of parameters passed to function.
 * @...: variable number of parameters to calculate sum of.
 *
 * Return: if n == 0 - 0.
 * Otherwise - total sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
