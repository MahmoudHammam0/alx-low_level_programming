#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: the buffer
 * @size: size of the buffer b
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a = 0;
	int x;
	int y;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		y = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + a + x));
			else
				printf("  ");
			if (x % 2)
				printf(" ");
		}
		for (x = 0; x < y; x++)
		{
			int z = *(b + a + x);

			if (z < 32 || z > 132)
				z = '.';
			printf("%c", z);
		}
		printf("\n");
		a = a + 10;
	}
}
