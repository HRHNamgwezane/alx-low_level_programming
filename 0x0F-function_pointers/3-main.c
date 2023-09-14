#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations.
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to arguments
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *op;
	int (*operation)(int, int) = get_op_func(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argc[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}
