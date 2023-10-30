#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: name of the file to print
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc = open(filename, O_RDONLY);
	char *buffer = malloc(letters);
	ssize_t bytes_read = read(desc, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL || buffer == NULL)
	{
		return (0);
	}
	if (desc == -1)
		return (0);
	if (buffer == NULL)
	{
		close(desc);
		return (0);
	}
	if (bytes_read == -1)
	{
		free(buffer);
		close(desc);
		return (0);
	}
	free(buffer);
	close(desc);
	if (bytes_written == bytes_read)
	{
		return (bytes_written);
	}
	else
	{
		return (0);
	}
}
