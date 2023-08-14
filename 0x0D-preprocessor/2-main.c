#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of file it was compiled from
 * followed by a new line.
 *
 * Return: name of file
 */
int main()
{
	fprintf(stdout, "Compiled from:%s\n", __FILE__);
	return (0);
}
