#include "main.h"

/**
 * _puts - prints string followed by new line
 * @*s: input
 *
 * Return: none
 */
void _puts(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[count]);
		count++;
	}
}

int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
