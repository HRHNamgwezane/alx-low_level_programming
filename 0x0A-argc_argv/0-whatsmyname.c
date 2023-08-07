#include "main.h"
#include <stdio.h>

/**
 * Prgram that prints its name followed by a new line
 *
 * Return: program name
 */
int main(int argc, int char* argv[])
{
	char *lastPathSeparator = strrchr(arg[0], '/');

	if(lastPathSeparator != NULL)
	{
		printf("Program name: %s\n", lastPathSeparator + 1);
		{
			else
			{
				printf("Program name: %s\n", argv[0]);
			}
		}
	}
	return (0);
}
