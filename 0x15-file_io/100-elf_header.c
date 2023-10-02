#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *elf - Checks if the file is ELF file or not
 *@ptr: A pointer to magic numbers array.
 *Return: Nothing
 */
void elf(unsigned char *ptr)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ptr[i] != 127 &&
				ptr[i] != 'E' &&
				ptr[i] != 'L' &&
				ptr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: None ELF file\n");
			exit(98);
		}
	}
}

/**
 *magic - get the magic numbers of an ELF header.
 *@ptr: A pointer to ELF magic numbers array
 *Return: Nothing
 */
void magic(unsigned char *ptr)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ptr[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 *class - get the class of an ELF header.
 *@ptr: A pointer to the ELF class array.
 *Return: Nothing
 */
void class(unsigned char *ptr)
{
	printf("  Class:                             ");
	if (ptr[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (ptr[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (ptr[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", ptr[EI_CLASS]);
}

/**
 *data - gets data of an ELF header.
 *@ptr: A pointer to an array containing the ELF class.
 *Return:Nothing
 */
void data(unsigned char *ptr)
{
	printf("  Data:                              ");
	switch (ptr[EI_DATA])
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
			printf("<unknown: %x>\n", ptr[EI_CLASS]);
	}
}

/**
 *version - gets the version of an ELF header.
 *@ptr: A pointer to an array containing the ELF version.
 *Return: Nothing
 */
void version(unsigned char *ptr)
{
	printf("  Version:                           %d",
			ptr[EI_VERSION]);

	switch (ptr[EI_VERSION])
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
 *osabi - gets the OS/ABI of an ELF header.
 *@ptr: A pointer to an array containing the ELF version.
 *Return: Nothing
 */
void osabi(unsigned char *ptr)
{
	printf("  OS/ABI:                            ");
	switch (ptr[EI_OSABI])
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
			printf("<unknown: %x>\n", ptr[EI_OSABI]);
	}
}

/**
 *abi - gets the ABI version of an ELF header.
 *@ptr: A pointer to an array containing the ELF ABI version.
 *Return: Nothing
 */
void abi(unsigned char *ptr)
{
	printf("  ABI Version:                       %d\n",
			ptr[EI_ABIVERSION]);
}

/**
 *type - gets the type of an ELF header.
 *@type: The ELF type.
 *@ptr: A pointer to an array containing the ELF class.
 *Return: Nothing
 */
void type(unsigned int type, unsigned char *ptr)
{
	if (ptr[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
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
 *entry - Prints the entry point of an ELF header.
 *@entry: The address of the ELF entry point.
 *@ptr: A pointer to an array containing the ELF class.
 *Return: Nothing
 */
void entry(unsigned long int entry, unsigned char *ptr)
{
	printf("  Entry point address:               ");
	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ptr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 *elf_close - Closes an ELF file.
 *@fd: The file descriptor of the ELF file.
 *Return: Nothing
 */
void elf_close(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 *main - Displays the information contained in the
 *Description: displays the information contained in the ELF header
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments
 *Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int fd, r;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		elf_close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, h, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(h);
		elf_close(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf(h->e_ident);
	printf("ELF Header:\n");
	magic(h->e_ident);
	class(h->e_ident);
	data(h->e_ident);
	version(h->e_ident);
	osabi(h->e_ident);
	abi(h->e_ident);
	type(h->e_type, h->e_ident);
	entry(h->e_entry, h->e_ident);
	free(h);
	elf_close(fd);
	return (0);
}
