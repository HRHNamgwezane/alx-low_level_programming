#include "main.h"

/**
 * _islower(int c)- checks for lower case character.
 * @c char to be checked.
 * Return: 1 if char is lower case, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a'&& c <= 'z')
		return (1);

	else
		return (0);
}
