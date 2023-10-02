#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to be appended
 * @text_content: content to be appended to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, l = strlen(text_content);

	if (text_content == NULL)
		l = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, l);
	if (w < 0 || w < l)
		return (-1);
	close(fd);
	return (1);
}
