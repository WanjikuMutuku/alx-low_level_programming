#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
		b_written = write(fd, text_content, strlen(text_content));

	close(fd);

	if (b_written < 0)
		return (-1);
	return (1);
}
