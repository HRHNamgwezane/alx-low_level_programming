#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *arr;

	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		exit(EXIT_FAILURE);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		fprintf(stderr, "Error\n");
		exit(EXIT_FAILURE);
	}

	arr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}

	return (0);
}
