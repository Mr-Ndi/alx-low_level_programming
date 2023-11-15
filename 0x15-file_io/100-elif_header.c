#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error - Display error message and exit with status code 98.
 * @message: The error message to be displayed.
 */
void display_error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - Display information from the ELF header of a file.
 * @filename: The name of our ELF file.
 */
void display_elf_header(char *filename)
{
	int fd = open(filename, O_RDONLY), i;

	if (fd == -1)
		display_error("Error: Unable to open ELF file");

	Elf64_Ehdr elf_header;
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		display_error("Error: Unable to read ELF header");

	close(fd);

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\n");

	printf("  Class:                             ELF%d\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Invalid data encoding");
	printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            UNIX - System V\n");
	printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Invalid type");
	printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, exits with status code 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	display_elf_header(argv[1]);

	return 0;
}
