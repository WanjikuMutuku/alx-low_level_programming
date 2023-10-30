#include "main.h"
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	if (fd == -1)
		return (-1);
	close(fd);
	if (bytes_written == -1 || (size_t)bytes_written <
			strlen(text_content))
		return (-1);
	return (1);
}
