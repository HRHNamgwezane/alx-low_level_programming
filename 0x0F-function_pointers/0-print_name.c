#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

typedef void (*print_func)(char *);

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, print_func f)
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
