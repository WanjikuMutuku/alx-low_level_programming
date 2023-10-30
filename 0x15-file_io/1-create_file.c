#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	ssize_t bytes_written = write(desc, text_content,
			strlen(text_content));

	if (filename == NULL)
	{
		return (-1);
	}
	if (desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (bytes_written == -1)
		{
			close(desc);
			return (-1);
		}
	}
	close(desc);
	return (1);
}
