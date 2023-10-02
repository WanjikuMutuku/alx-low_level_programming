#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename:  name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedesc = open(filename, O_WRONLY | O_APPEND);
	ssize_t byteswritten = write(filedesc, text_content, strlen(text_content));

	if (filename == NULL)
	{
		return (-1);
	}
	if (filedesc == -1)
	{
		return (-1);
	}
	close(filedesc);
	if (byteswritten == -1)
	{
		return (-1);
	}
	return (1);
}
