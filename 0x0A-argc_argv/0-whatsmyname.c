#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
