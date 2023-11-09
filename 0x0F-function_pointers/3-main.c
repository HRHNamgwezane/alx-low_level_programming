#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 = atoi(argv[3]);

	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (op[1] != '\0' || (op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/' && op[0] != '%'))
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	if (*op == '+')
	{
		result = num1 + num2;
	}
	else if (*op == '-')
	{
		result = num1 - num2;
	}
	else if (*op == '*')
	{
		result = num1 * num2;
	}
	else if (*op == '/')
	{
		result = num1 / num2;
	}
	else if (*op == '%')
	{
		result = num1 % num2;
	}

	printf("%d\n", result);

	return (0);
}
