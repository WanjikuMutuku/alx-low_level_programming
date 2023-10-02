#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to POSIX std out.
 * @filename: name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc = open(filename, O_RDONLY);
	char *buffer = malloc(letters);
	ssize_t bytesread = read(filedesc, buffer, letters);
	ssize_t byteswritten = write(STDOUT_FILENO, buffer, bytesread);

	if (filename == NULL)
	{
		return (0);
	}
	if (filedesc == -1)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		close(filedesc);
		return (0);
	}
	if (bytesread == -1)
	{
		free(buffer);
		close(filedesc);
		return (0);
	}
	free(buffer);
	close(filedesc);
	if (byteswritten == bytesread)
	{
		return (byteswritten);
	}
	else
	{
		return (0);
	}
}
