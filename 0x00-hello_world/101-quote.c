#include <stdio.h>
#include <unistd.h>
/**
 * Main - prints out the ending lines of a quote to the standard error.
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	Return(1);
}
