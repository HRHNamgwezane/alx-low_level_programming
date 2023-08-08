#include <stdio.h>

/**
 * Prgram that prints its name followed by a new line
 *
 * Return: program name
 */
int main(int argc, int char *argv[])
{
	(void)argc;

	if (argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
