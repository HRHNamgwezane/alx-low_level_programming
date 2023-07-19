#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char num, alphabet;

	for (num = '0'; num <= 9; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
