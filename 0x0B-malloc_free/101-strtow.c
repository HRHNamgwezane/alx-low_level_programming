#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *strtow - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int word_list;
	int word_len = 0;
	int num_words = 0;
	char *words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '\0')
		{
			num_words++;
			while (str[i] != '\0' &&str[i] != '\0')
				i++;
		}
		words[word_list] = malloc((word_len + 1) * sizeof(char));

		if (words[word_list] == NULL)
		{
			for (j = 0; j < word_list; j++)
				return (NULL);
		}
		word_list++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '\0')
		{
			while (str[i] != '\0' &&str[i] != '\0')
			{
				words[word_list][word_len] = str[i];
				word_len++;
				i++;
			}

			words[word_list][word_len] = '\0';
			word_list++;
		}
	}
	return (words);
}
