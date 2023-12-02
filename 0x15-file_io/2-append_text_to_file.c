#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists and the content is appended, -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t nletters = 0;
	ssize_t rwr = write(fd, text_content, nletters);

	if (!filename)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[nletters])
			nletters++;

		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
