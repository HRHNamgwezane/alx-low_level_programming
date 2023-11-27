#include <stdio.h>
#include "main.h"

/**
 * check_endianness - function to determine the endianness of the system
 *
 * Return: 1 for little endian, 0 for big endian
 */
int check_endianness(void)
{
	union {
		int num;
		char byte;
	} check;

	check.num = 1;
	return (check.byte);
}
