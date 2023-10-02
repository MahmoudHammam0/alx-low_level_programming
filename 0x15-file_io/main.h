#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
void copy_func(int fdf, int fdt, char *s1, char *s2, char *buff);
void files(char *s1, char *s2);
#endif
