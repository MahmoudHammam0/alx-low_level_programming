#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: name of file to read from
 * @letters: number of letters to read from the file
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w, b = letters;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);
	r = read(fd, buff, letters);
	if (r < 0)
		return (0);
	w = write(STDOUT_FILENO, buff, letters);
	if (w < 0 || w < b)
		return (0);
	free(buff);
	close(fd);
	return (r);
}
