#include "main.h"
/**
 * create_file - create a new file and write it
 * @filename: name of the file to be created
 * @text_content: content of the new file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, l = strlen(text_content);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
		if (fd < 0)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, l);
	if (w < l || w < 0)
		return (-1);
	close(fd);
	return (1);
}
