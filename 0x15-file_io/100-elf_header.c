#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void checkElf(unsigned char *eIdent);
void printMagic(unsigned char *eIdent);
void printClass(unsigned char *eIdent);
void printData(unsigned char *eIdent);
void printVersion(unsigned char *eIdent);
void printAbi(unsigned char *eIdent);
void printOsAbi(unsigned char *eIdent);
void printType(unsigned int eType, unsigned char *eIdent);
void printEntry(unsigned long int eEntry, unsigned char *eIdent);
void closeElf(int elf);

/**
 * checkElf - function to check for elif
 * @eIdent: pointer to an array
 */
void checkElf(unsigned char *eIdent)
{
    int ind;

    for (ind = 0; ind < 4; ind++)
    {
        if (eIdent[ind] != 127 &&
            eIdent[ind] != 'E' &&
            eIdent[ind] != 'L' &&
            eIdent[ind] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: It is not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * printMagic - a function to printnumber in a file
 * @eIdent: pointer to an array
 */
void printMagic(unsigned char *eIdent)
{
    int ind;

    printf("Magic:");

    for (ind = 0; ind < EI_NIDENT; ind++)
    {
        printf("%02x", eIdent[ind]);

        if (ind == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

/**
 * printClass - a function to a class of elif
 * @eIdent: a pointer to an elif
 */
void printClass(unsigned char *eIdent)
{
    printf("Class: ");

    switch (eIdent[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", eIdent[EI_CLASS]);
    }
}

/**
 * printData - a function to print data
 * @eIdent: a pointer to a file
 */
void printData(unsigned char *eIdent)
{
    printf("Data: ");

    switch (eIdent[EI_DATA])
    {
    case ELFDATANONE:
        printf("none\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", eIdent[EI_DATA]);
    }
}

/**
 * printVersion - a function to a new version of a file
 * @eIdent: a pointer to the file
 */
void printVersion(unsigned char *eIdent)
{
    printf("Version: %d", eIdent[EI_VERSION]);

    switch (eIdent[EI_VERSION])
    {
    case EV_CURRENT:
        printf("(current)\n");
        break;
    default:
        printf("\n");
    }
}

/**
 * printOsAbi - a function to print osabin
 * @eIdent: a pointer to a file
 */
void printOsAbi(unsigned char *eIdent)
{
    printf("OS/ABI: ");

    switch (eIdent[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - system V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - TRU64\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone\n");
        break;
    default:
        printf("<unknown: %x\n", eIdent[EI_OSABI]);
    }
}

/**
 * printAbi - a function to print abi
 * @eIdent: a pointer to the file
 */
void printAbi(unsigned char *eIdent)
{
    printf("ABI Version: %d\n", eIdent[EI_ABIVERSION]);
}

/**
 * printType - a function to print type of header
 * @eType: a type to be checked
 * @eIdent: pointer to the file
 */
void printType(unsigned int eType, unsigned char *eIdent)
{
    if (eIdent[EI_DATA] == ELFDATA2MSB)
        eType >>= 8;

    printf("Type: ");

    switch (eType)
    {
    case ET_NONE:
        printf("NONE (None)\n");
        break;
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", eType);
    }
}

/**
 * printEntry - a function to print entry
 * @eEnrty: address of a file
 * @ e_dent: pointer to an array
 */
void printEntry(unsigned long int eEntry, unsigned char *eIdent)
{
    printf("Entry point address:");

    if (eIdent[EI_DATA] == ELFDATA2MSB)
    {
        eEntry = ((eEntry << 8) & 0xFF00FF00) | ((eEntry >> 8) & 0xFF00FF);
        eEntry = ((eEntry << 16) | (eEntry >> 16));
    }

    if (eIdent[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)eEntry);
    else
        printf("%#lx\n", eEntry);
}

/**
 * closeElf - a function to close a file
 * @elf: a file to close
 */
void closeElf(int elf)
{
    if (close(elf) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", elf);
        exit(98);
    }
}

/**
 * main - a main function of our program
 * @argc: argument count
 * @argv: argument vector
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    Elf64_Ehdr *header;
    int fd, bytesRead;

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        closeElf(fd);
        dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
        exit(98);
    }

    bytesRead = read(fd, header, sizeof(Elf64_Ehdr));
    if (bytesRead == -1)
    {
        free(header);
        closeElf(fd);
        dprintf(STDERR_FILENO, "Error: Unable to read file %s\n", argv[1]);
        exit(98);
    }

    checkElf(header->e_ident);
    printf("ELF Header:\n");
    printMagic(header->e_ident);
    printClass(header->e_ident);
    printData(header->e_ident);
    printVersion(header->e_ident);
    printOsAbi(header->e_ident);
    printAbi(header->e_ident);
    printType(header->e_type, header->e_ident);
    printEntry(header->e_entry, header->e_ident);

    free(header);
    closeElf(fd);
    return (0);
}

