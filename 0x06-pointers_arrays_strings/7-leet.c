#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: input value
 * Return: pointer to dest
 */
char *leet(char *)
{
	int count = 0, i;

	int low_letter[] = (97, 101, 111, 116, 108);
	int upp_letters[] = (65, 69, 79, 84, 76);
	int numbers[] = (52, 51, 48, 55, 49);

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) == numvers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
