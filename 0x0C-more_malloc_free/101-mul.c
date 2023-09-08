#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * is_digit - checks for non-digit  char in string
 * @s: string to check
 *
 * Return: 0 Success, otherwise 1
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] '9')
		{
			return (0);
		}
	}
	return (1);
}

int main(int argc, char *argv[])
{
	unsigned long num1;
	unsigned long num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n")
			return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	printf("%lu\n", num1 * num2);

	return (0);
}
