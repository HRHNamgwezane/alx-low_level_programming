#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints its contents to the standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	char *buffer = malloc(sizeof(char) * (letters + 1));
	ssize_t bytes_read = fread(buffer, sizeof(char), letters, fp);

	if (filename == NULL)
		return (0);

	if (fp == NULL)
		return (0);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	if (bytes_read == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	free(buffer);
	fclose(fp);

	return (bytes_read);
}
