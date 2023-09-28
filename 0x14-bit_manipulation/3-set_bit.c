#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to change its bit at given index
 * @index: index of bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 32)
		return (-1);
	num = (*n >> index) | 1;
	*n = (num << index) | *n;
	return (1);
}
