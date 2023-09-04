#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks if a string is a positive number
 * @s: input string
 *
 * Return: 1 if positive number, otherwise 0
 */
int is_positive_number(char *s)
{
	if (*s == '-')
		return (0);

	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds postive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
