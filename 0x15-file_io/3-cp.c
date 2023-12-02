#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * exit_with_error - print error message and exit with specified code
 * @code: exit code
 * @format: format string for dprintf
 * @filename: file name for the error message
 */
void exit_with_error(int code, const char *format, const char *filename)
{
	dprintf(STDERR_FILENO, format, filename);
	exit(code);
}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0 on success, otherwise exit with an error code
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to\n", NULL);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	do {
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
		{
			close(file_from);
			close(file_to);
			exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
		}

		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
		{
			close(file_from);
			close(file_to);
			exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	while (nchars == 1024);

	err_close = close(file_from);
	if (err_close == -1)
	{
		exit_with_error(100, "Error: Can't close fd %d\n", argv[1]);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		exit_with_error(100, "Error: Can't close fd %d\n", argv[2]);
	}

	return (0);
}
