#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * void print_all - prints anything
 * @format: list types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = " ";
	va_list list;
	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(list, int));
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(list, int));
		else if (format[i] == 'f')
			printf("%s%f", sep, va_arg(list, double));
		else if (format[i] == 's')
		{
			char *str = va_arg(list, char *);
			printf("%s%s", sep, (str ? str : "(nil)"));
		}

		sep = ", ";

		i++;
	}

	printf("\n");
	va_end(list);
}
