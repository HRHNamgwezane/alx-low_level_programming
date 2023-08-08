#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return 0 (success)
 */
int main(int ardc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
