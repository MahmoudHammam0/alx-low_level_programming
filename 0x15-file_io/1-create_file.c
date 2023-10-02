#include "main.h"
/**
 * _strlen - calculate string length
 * @s: string to be calculated
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * create_file - create a new file and write it
 * @filename: name of the file to be created
 * @text_content: content of the new file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	i = _strlen(text_content);
	w = write(fd, text_content, i);
	if (w < 0 || w < i)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
