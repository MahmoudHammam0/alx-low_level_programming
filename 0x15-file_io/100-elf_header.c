#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
/**
 *magic - print magic numbers of ELF header
 *@ptr: pointer to ELF header struct
 *@name: file name
 *@fd: file descriptor
 *Return: Nothing
 */
void magic(Elf64_Ehdr *ptr, char *name, int fd)
{
	size_t i;
	int c;
	unsigned char *m = ptr->e_ident;

	if (m[EI_MAG0] == ELFMAG0 &&
			m[EI_MAG1] == ELFMAG1 &&
			m[EI_MAG2] == ELFMAG2 &&
			m[EI_MAG3] == ELFMAG3)
	{
		printf("Magic:  ");
		for (i = 0; i < EI_NIDENT; i++)
			printf(" %02x", ptr->e_ident[i]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: %s is none ELF file\n", name);
		c = close(fd);
		if (c)
			dprintf(STDERR_FILENO, "Error closing fd %d", fd);
		exit(98);
	}
}

/**
 *class - check class of ELF file
 *@ptr: pointer to struct of header features
 *Return: Nothing
 */
void class(Elf64_Ehdr *ptr)
{
	printf("%-35s", "Class:");
	switch (ptr->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("INVALID\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
	}
}

/**
 *data - get endianness of ELF file
 *@ptr: pointer to struct of ELF header features
 *Return: Nothing
 */
void data(Elf64_Ehdr *ptr)
{
	printf("%-35s", "Data:");
	switch (ptr->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown format\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement big-endian\n");
			break;
	}
}

/**
 *velf - get version of ELF file
 *@ptr: pointer to struct of ELF header features
 *Return: Nothing
 */
void velf(Elf64_Ehdr *ptr)
{
	printf("%-35s", "Version:");
	switch (ptr->e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("%d (invalid)\n", EV_NONE);
			break;
		case EV_CURRENT:
			printf("%d (current)\n", EV_CURRENT);
			break;
	}
}

/**
 *osabi - determine which ABI convention is in use
 *@ptr: pointer to struct of ELF header features
 *Return: Nothing
 */
void osabi(Elf64_Ehdr *ptr)
{
	printf("%-35s", "OS/ABI:");
	switch (ptr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
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
			printf("Stand-alone (embedded)\n");
			break;
		default:
			printf("<unknown: %d>\n", ptr->e_ident[EI_OSABI]);
	}
}

/**
 *vabi - get ABI version
 *@ptr: pointer to ELF header struct
 *Return: Nothing
 */
void vabi(Elf64_Ehdr *ptr)
{
	printf("%-35s%d\n", "ABI Version:", ptr->e_ident[EI_ABIVERSION]);
}

/**
 *type - determine file type
 *@ptr: pointer to ELF header struct
 *Return: Nothing
 */
void type(Elf64_Ehdr *ptr)
{
	printf("%-35s", "Type:");
	if (ptr->e_type == ET_NONE)
		printf("NONE (Unknown type)\n");
	else if (ptr->e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (ptr->e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (ptr->e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (ptr->e_type == ET_CORE)
		printf("CORE (Core file)\n");
}

/**
 *entry - determine entry point function address
 *@ptr: pointer to struct of ELF header features
 *Return: Nothing
 */
void entry(Elf64_Ehdr *ptr)
{
	printf("%-35s0x%lx\n", "Entry point address:",
			(unsigned long) ptr->e_entry);
}

/**
 *main - Entry point
 *@argc: arguments count
 *@argv: array of pointers of string arguments
 *Return: EXIT_SUCCESS on success, otherwise 98 on error
 */
int main(int argc, char *argv[])
{
	ssize_t r;
	int fd;
	Elf64_Ehdr *ptr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		exit(98);
	}
	ptr = malloc(sizeof(Elf64_Ehdr));
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: out of memory\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: could not open %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, ptr, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(ptr);
		dprintf(STDERR_FILENO, "Error: could not read %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	if (close(fd))
		dprintf(STDERR_FILENO, "Problem closing fd %d", fd);
	magic(ptr, argv[1], fd);
	class(ptr);
	data(ptr);
	velf(ptr);
	osabi(ptr);
	vabi(ptr);
	type(ptr);
	entry(ptr);
	free(ptr);
	exit(EXIT_SUCCESS);
}
