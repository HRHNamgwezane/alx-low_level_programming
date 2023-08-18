#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 *
 * If string is NULL, print (nil)
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	float f;
	char *s;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s", s);
				}

				else
				{
					printf("(nil)");
				}
				break;
			default:
				break;

		}

		if (format[i + 1])
		{
			printf(", ");
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
