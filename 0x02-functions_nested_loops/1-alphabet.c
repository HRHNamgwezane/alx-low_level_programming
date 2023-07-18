#include "main.h"

/**
 * main - print alphabet in lower case followed by a new line
 *
 */
void print_alphabet(void);
{
	char alphabet;
	for(alphabet = 'a'; alphabet <= 'z'; alphabet ++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
