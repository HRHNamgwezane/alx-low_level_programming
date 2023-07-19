#include "main.h"

/**
 * _isalpha - checks wether char is an alphabet
 * @c: char to be checked.
 * Return: (1) if c is alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
