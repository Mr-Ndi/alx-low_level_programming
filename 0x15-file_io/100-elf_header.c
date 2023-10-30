#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_error - Display an error message to stderr and exit with status 98
 * @msg: The error message
 */
void display_error(const char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

/**
 * display_elf_header - Display information from the ELF header
 * @header: Pointer to the ELF header structure
 */
void display_elf_header(Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], i + 1 < EI_NIDENT ? ' ' : '\n');
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown OS/ABI");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d (Executable file)\n", header->e_type);
    printf("  Entry point address:               %lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
        display_error("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        display_error("Error: Could not open file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
        display_error("Error: Could not read ELF header");

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
        display_error("Error: Not an ELF file");

    display_elf_header(&header);

    close(fd);
    return 0;
}

