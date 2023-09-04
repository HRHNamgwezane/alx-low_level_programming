#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts string to integer
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
