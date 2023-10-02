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
void print_error(char *msg, char *filename, int exit_code) {
    dprintf(STDERR_FILENO, msg, filename);
    exit(exit_code);
}
int main(int argc, char *argv[])
{
	int fd_from = open(argv[1], O_RDONLY);
	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	ssize_t bytes_written = write(fd_to, buffer, bytes_read);

	 if (argc != 3) {
        print_error("Usage: cp file_from file_to\n", "", 97);
    }

    if (fd_from == -1) {
        print_error("Error: Can't read from file %s\n", argv[1], 98);
    }
    if (fd_to == -1) {
        print_error("Error: Can't write to %s\n", argv[2], 99);
    }
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        if (bytes_written != bytes_read) {
            print_error("Error: Can't write to %s\n", argv[2], 99);
        }
    }

    if (bytes_read == -1) {
        print_error("Error: Can't read from file %s\n", argv[1], 98);
    }

    if (close(fd_from) == -1) {
        print_error("Error: Can't close fd %d\n", fd_from, 100);
    }

    if (close(fd_to) == -1) {
        print_error("Error: Can't close fd %d\n", fd_to, 100);
    }

    return 0;
}
