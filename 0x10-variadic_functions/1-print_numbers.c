#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg,h>

/**
 * void print_numbers - prints numbers followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to function
 * @...: variable number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && seperator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(arg);
	printf("\n");
}
