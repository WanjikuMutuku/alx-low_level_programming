#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_elf_header - Displays information from the ELF header.
 * *header: Pointer to the ELF header structure.
 *
 * Return: alwaus success
 */
void display_elf_header(const Elf64_Ehdr *header) 
{
	int i = 0;
	
	while (i < EI_NIDENT) 
	{
		printf("%02x ", header->e_ident[i]);
		++i;
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Unknown");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", header->e_type);
    printf("  Entry point address:               0x%lx\n", (unsigned long) header->e_entry);
}

/**
 * main - main function
 * @argc: argument count.
 * @argv: argument vector
 *
 * Return: Always success.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: Not an ELF file: %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    display_elf_header(&header);
    close(fd);
    exit(0);
}
