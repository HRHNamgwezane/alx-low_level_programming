#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int len = 0;
	
	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * create_xarray - Creates an array of chars and initializes it with 'x'.
 * Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *array = malloc(size);
	int i;
	
	if (array == NULL)
	{
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
	{
		array[i] = 'x';
	}
	array[size - 1] = '\0';
	return (array);
}

/**
 * multiply - Multiplies a string of numbers by a single digit.
 * @result: The buffer to store the result.
 * @num1: The string of numbers.
 * @digit: The single digit.
 * @size: The size of the result buffer.
 * @zeroes: The necessary number of leading zeroes.
 */
void multiply(char *result, char *num1, int digit, int size, int zeroes)
{
	int carry = 0;
	int i;
	int num;

	for (i = 0; i < size; i++)
	{
		num = (num1[i] - '0') * digit + carry;
		result[i] = (num % 10) + '0';
		carry = num / 10;
	}

	for (i = size; i < size + zeroes; i++)
	{
		result[i] = '0';
	}
	result[size + zeroes] = '\0';
}

/**
 * add - Adds two strings of numbers.
 * @result: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @size: The size of the result buffer.
 */
void add(char *result, char *next_prod, int size)
{
	int carry = 0;
	int i;
	int num;

	for (i = size - 1; i >= 0; i--)
	{
		num = (result[i] - '0') + (next_prod[i] - '0') + carry;
		result[i] = (num % 10) + '0';
		carry = num / 10;
	}
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	
	char *num1 = argv[1];
	char *num2 = argv[2];

	int len1 = find_len(num1);
	int len2 = find_len(num2);
	int total_len = len1 + len2;
	int i;
	int digit;
	int start_index;
	char *result = create_xarray(total_len + 1);
	char *temp = create_xarray(total_len + 1);

	for (i = len2 - 1; i >= 0; i--)
	{
		digit = num2[i] - '0';
		multiply(temp, num1, digit, total_len, len2 - 1 - i);
		add(result, temp, total_len);
	}

	start_index = 0;
	while (result[start_index] == '0')
	{
		start_index++;
	}
	
	if (result[start_index] == '\0')
	{
		printf("0\n");
	}
	else
	{
		printf("%s\n", result + start_index);
	}

	free(result);
	free(temp);
	return (0);
}
