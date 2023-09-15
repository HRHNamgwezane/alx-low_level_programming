#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * void print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to functions
 * @...: variable number of strings to print
 * Description: if separator is NULL, do not print
 * Else: if one of the strings is NULL (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}

		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("/n");
}

