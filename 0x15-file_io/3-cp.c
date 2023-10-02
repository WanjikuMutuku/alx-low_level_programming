#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector.
 *
 * Return: Always success.
 */
int main(int argc, char *argv[])
{
	int file_from = open(argv[1], O_RDONLY);
	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	char buffer[BUFFER_SIZE];
	ssize_t bytesread, byteswritten;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	while ((bytesread = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		byteswritten = write(file_to, buffer, bytesread);
		if (byteswritten != bytesread)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytesread == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n",
			(file_from == -1) ? file_to : file_from);
		exit(100);
	}
	exit(0);
}
