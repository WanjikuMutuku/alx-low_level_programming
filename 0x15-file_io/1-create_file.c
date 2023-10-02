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
	int filedesc;
	ssize_t byteswritten = write(filedesc, text_content, strlen(text_content));

	filedesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		if (byteswritten == -1)
		{
			close(filedesc);
			return (-1);
		}
	}
	close(filedesc);
	return (-1);
}
