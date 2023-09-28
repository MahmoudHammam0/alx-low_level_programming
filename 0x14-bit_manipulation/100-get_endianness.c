#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int v = 5;
	char *s = (char *)&v;

	return (int)*s;
}
