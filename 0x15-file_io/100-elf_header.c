#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

void display_elf_header(const Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", header->e_type);
    printf("  Entry point address:               %lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) 
{
	int fd = open(argv[1], O_RDONLY);
	Elf64_Ehdr elf_header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 98;
    }
    if (fd == -1) {
        perror("Error opening file");
        fprintf(stderr, "Failed to open the specified file.\n");
        return 98;
    }
    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        perror("Error reading ELF header");
        fprintf(stderr, "Failed to read ELF header from the file.\n");
        close(fd);
        return 98;
    }
    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: Not a valid ELF file\n");
        close(fd);
        return 98;
    }

    display_elf_header(&elf_header);

    close(fd);
    return 0;
}
