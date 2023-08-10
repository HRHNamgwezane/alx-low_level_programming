#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert string to int
 * @s: string converted
 *
 * Return: converted int
 */
int main(int argc, char *argv[])
{
	int value1;
	int value2;
	int output;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	value1 = atoi(argv[1]);
	value2 = atoi(argv[2]);
	output = value1 * value2;

	printf("%d\n", output);

	return (0);
}
