#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
/**
 * error_exit - error messages.
 * @code: the program.
 * @message: error message.
 *
 * Return: void
 */
void error_exit(int code, const char *message)
{
	dprintf(2, "%s\n", message);
	exit(code);
}
/**
 * open_file - opens the file.
 * @filename: name of file.
 * @flags: the flags
 * @mode: the mode
 *
 * Return: file descriptor.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (fd);
}
/**
 * copy_file - copies the file.
 * @source: from this file
 * @dest: to this file.
 *
 * Return: Void
 */
void copy_file(const char *source, const char *dest)
{
	int source_fd = open_file(source, O_RDONLY, 0);
	int dest_fd = open_file(dest, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP);
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	while ((bytesRead = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(dest_fd, buffer, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			dprintf(2, "Error: Can't write to file %s\n", dest);
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source);
		close(source_fd);
		close(dest_fd);
		exit(98);
	}
	close(source_fd);
	close(dest_fd);
}
/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector.
 *
 * Return: Always success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}
