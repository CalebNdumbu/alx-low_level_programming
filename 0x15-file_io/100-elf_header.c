#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void verify_elf(unsigned char *ident);
void display_magic(unsigned char *ident);
void display_architecture(unsigned char *ident);
void display_endian(unsigned char *ident);
void display_elf_version(unsigned char *ident);
void display_os_abi(unsigned char *ident);
void display_abi_version(unsigned char *ident);
void display_file_type(unsigned int type, unsigned char *ident);
void display_entry_point(unsigned long int entry, unsigned char *ident);
void close_file(int file);

/**
 * verify_elf - Checks if a file is in ELF format.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Exits with code 98 if the file is not in ELF format.
 */
void verify_elf(unsigned char *ident)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        if (ident[index] != 127 &&
            ident[index] != 'E' &&
            ident[index] != 'L' &&
            ident[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * display_magic - Prints the magic numbers of an ELF header.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void display_magic(unsigned char *ident)
{
    int index;

    printf(" Magic: ");

    for (index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", ident[index]);

        if (index == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

/**
 * display_architecture - Prints the architecture of an ELF header.
 * @ident: A pointer to an array containing the ELF architecture.
 */
void display_architecture(unsigned char *ident)
{
    printf(" Architecture: ");

    switch (ident[EI_CLASS])
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
        printf("<unknown: %x>\n", ident[EI_CLASS]);
    }
}

/**
 * display_endian - Prints the endianness of an ELF header.
 * @ident: A pointer to an array containing the ELF endianness.
 */
void display_endian(unsigned char *ident)
{
    printf(" Data: ");

    switch (ident[EI_DATA])
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
        printf("<unknown: %x>\n", ident[EI_DATA]);
    }
}

/**
 * display_elf_version - Prints the version of an ELF header.
 * @ident: A pointer to an array containing the ELF version.
 */
void display_elf_version(unsigned char *ident)
{
    printf(" Version: %d", ident[EI_VERSION]);

    switch (ident[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
        break;
    }
}

/**
 * display_os_abi - Prints the OS/ABI of an ELF header.
 * @ident: A pointer to an array containing the ELF OS/ABI.
 */
void display_os_abi(unsigned char *ident)
{
    printf(" OS/ABI: ");

    switch (ident[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
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
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", ident[EI_OSABI]);
    }
}

/**
 * display_abi_version - Prints the ABI version of an ELF header.
 * @ident: A pointer to an array containing the ELF ABI version.
 */
void display_abi_version(unsigned char *ident)
{
    printf(" ABI Version: %d\n", ident[EI_ABIVERSION]);
}

/**
 * display_file_type - Prints the type of an ELF header.
 * @type: The ELF type.
 * @ident: A pointer to an array containing the ELF architecture.
 */
void display_file_type(unsigned int type, unsigned char *ident)
{
    if (ident[EI_DATA] == ELFDATA2MSB)
        type >>= 8;

    printf(" Type: ");

    switch (type)
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
        printf("<unknown: %x>\n", type);
    }
}

/**
 * display_entry_point - Prints the entry point address of an ELF header.
 * @entry: The address of the ELF entry point.
 * @ident: A pointer to an array containing the ELF architecture.
 */
void display_entry_point(unsigned long int entry, unsigned char *ident)
{
    printf(" Entry point address: ");

    if (ident[EI_DATA] == ELFDATA2MSB)
    {
        entry = ((entry << 8) & 0xFF00FF00) |
                ((entry >> 8) & 0xFF00FF);
        entry = (entry << 16) | (entry >> 16);
    }

    if (ident[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)entry);

    else
        printf("%#lx\n", entry);
}

/**
 * close_file - Closes a file.
 * @file: The file descriptor of the file to be closed.
 *
 * Description: Exits with code 98 if the file cannot be closed.
 */
void close_file(int file)
{
    if (close(file) == -1)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't close file descriptor %d\n", file);
        exit(98);
    }
}

/**
 * main - Displays the information contained in the ELF header
 * of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Exits with code 98 if the file is not an ELF file
 * or if the function fails.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    Elf64_Ehdr *header;
    int file, read_result;

    file = open(argv[1], O_RDONLY);
    if (file == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }
    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        close_file(file);
        dprintf(STDERR_FILENO, "Error: Can't allocate memory for header\n");
        exit(98);
    }
    read_result = read(file, header, sizeof(Elf64_Ehdr));
    if (read_result == -1)
    {
        free(header);
        close_file(file);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
        exit(98);
    }

    verify_elf(header->e_ident);
    printf("ELF Header:\n");
    display_magic(header->e_ident);
    display_architecture(header->e_ident);
    display_endian(header->e_ident);
    display_elf_version(header->e_ident);
    display_os_abi(header->e_ident);
    display_abi_version(header->e_ident);
    display_file_type(header->e_type, header->e_ident);
    display_entry_point(header->e_entry, header->e_ident);

    free(header);
    close_file(file);
    return (0);
}

