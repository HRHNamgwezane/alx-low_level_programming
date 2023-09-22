#include "lists.h"
#include <stdio.h>

void print_BeforeMain() __attribute__((constructor));

/**
 * print_BeforeMain - prints sentence before main function
 */
void print_BeforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
