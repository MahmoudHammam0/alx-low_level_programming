#include "main.h"
/**
 * copy_func - copy contents of from to to file
 * @fdf: file descriptor of from file
 * @fdt: file descriptor of to file
 * @s1: name of from file
 * @s2: name of to file
 * @buff: buffer of 1024 size
 * Return: Nothing
 */
void copy_func(int fdf, int fdt, char *s1, char *s2, char *buff)
{
	int r, w;

	r = read(fdf, buff, 1204);
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s1);
		exit(98);
	}
	w = write(fdt, buff, r);
	if (w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s2);
		exit(99);
	}
}
/**
 * files - open the from file and make to file
 * @s1: argument1
 * @s2: argument2
 * Return: Nothing
 */
void files(char *s1, char *s2)
{
	int fdf, fdt, c1, c2;
	char *buff;

	fdf = open(s1, O_RDONLY);
	if (fdf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s1);
		exit(98);
	}
	fdt = open(s2, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s2);
		exit(99);
	}
	buff = malloc(sizeof(char) * 1204);
	if (buff == NULL)
		exit(-1);
	copy_func(fdf, fdt, s1, s2, buff);
	c1 = close(fdf);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	c2 = close(fdt);
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
}
/**
 * main - Entry point
 * Description: copies the content of a file to another file.
 * @argc: count of arguments
 * @argv: array of pointers to arguments strings
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	files(argv[1], argv[2]);
	return (0);
}
