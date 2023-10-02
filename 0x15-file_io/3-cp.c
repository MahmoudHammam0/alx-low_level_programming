#include "main.h"
/**
 * Error97 - handle error 97
 *
 * Return: Nothing
 */
void Error97(void)
{
	dprintf(2, "Usage: cp file_from file_to");
	exit(97);
}
/**
 * Error98 - handle error 98
 *@s: file name
 * Return: Nothing
 */
void Error98(char *s)
{
	dprintf(2, "Error: Can't read from file %s\n", s);
	exit(98);
}
/**
 * Error99 - handle error 99
 *@s: file name
 * Return: Nothing
 */
void Error99(char *s)
{
	dprintf(2, "Error: Can't write to %s\n", s);
	exit(99);
}
/**
 * Error100 - handle error 100
 * @fd: file discriptor number
 * Return: Nothing
 */
void Error100(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - Entry point
 * Description: copies the content of a file to another file.
 * @argc: argument count
 * @argv: array of strings of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fdf, fdt, r, w, c;
	char *buff;

	if (argc != 3)
		Error97();
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		Error97();
	fdf = open(argv[1], O_RDONLY);
	if (fdf < 0)
		Error98(argv[1]);
	r = read(fdf, buff, 1024);
	if (r < 0)
	{
		free(buff);
		close(fdf);
		Error98(argv[1]);
	}
	fdt = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdt < 0)
		Error99(argv[2]);
	w = write(fdt, buff, 1024);
	if (w < 0)
	{
		free(buff);
		close(fdf);
		close(fdt);
		Error99(argv[2]);
	}
	c = close(fdf);
	if (c < 0)
		Error100(c);
	c = close(fdt);
	if (c < 0)
		Error100(c);
	free(buff);
	close(fdf);
	close(fdt);
	return (0);
}
