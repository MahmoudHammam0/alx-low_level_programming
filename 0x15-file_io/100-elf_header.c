#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * magic - gets the magic numbers of ELF header
 * @ptr: pointer to magic numbers array
 * Return: Nothing
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
 *data - gets data of an ELF header.
 *@ptr: A pointer to the ELF class array.
 *Return: Nothing
 */
void data(unsigned char *ptr)
{
	printf("  Data:                              ");
	if (ptr[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (ptr[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else if (ptr[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("<unknown: %x>\n", ptr[EI_CLASS]);
}
/**
 *osabi - gets the OS/ABI of an ELF header.
 *@ptr: A pointer to ELF version array.
 *Return: Nothing
 */
void osabi(unsigned char *ptr)
{
	printf("  OS/ABI:                            ");
	if (ptr[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (ptr[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (ptr[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (ptr[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (ptr[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (ptr[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (ptr[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (ptr[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (ptr[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (ptr[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", ptr[EI_OSABI]);
}

/**
 *abi - gets the ABI version of an ELF header.
 *@ptr: A pointer to ELF ABI version array.
 *Return: Nothing
 */
void abi(unsigned char *ptr)
{
	printf("  ABI Version:                       %d\n", ptr[EI_ABIVERSION]);
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
	else if (ptr[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (ptr[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else
		printf("<unknown: %x>\n", ptr[EI_CLASS]);
}
/**
 *entry - Prints the entry point of an ELF header.
 *@entry: the ELF entry point address.
 *@ptr: A pointer to ELF class array.
 *Return: Nothing
 */
void entry(unsigned long int entry, unsigned char *ptr)
{
	printf("  Entry point address:               ");
	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ptr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}
/**
 *version - gets the version of an ELF header.
 *@ptr: A pointer to ELF version array.
 *Return: Nothing
 */
void version(unsigned char *ptr)
{
	printf("  Version:                           %d", ptr[EI_VERSION]);
	if (ptr[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
 *type - gets the type of an ELF header.
 *@type: The type of ELF.
 *@ptr: A pointer to ELF class array.
 *Return: Nothing
 */
void type(unsigned int type, unsigned char *ptr)
{
	if (ptr[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	if (type == ET_NONE)
		printf("NONE (None)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
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
		dprintf(STDERR_FILENO, "Error: problem during close of fd %d\n", fd);
		exit(98);
	}
}
/**
 *main - Entry point
 *Description: displays the information contained in the ELF header
 *@argc: arguments number
 *@argv: array of pointers to the arguments strings
 *Return: 0 on Success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int r, fd;
	Elf64_Ehdr *h;

	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, h, sizeof(Elf64_Ehdr));
	if (r < 0)
	{
		free(h);
		elf_close(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: file not found\n", argv[1]);
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
