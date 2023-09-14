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
int main(int _attribute_((_unused_)) argc. char *argv[])
{
	int num1;
	int num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argc[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (!get_op_func(op) || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
