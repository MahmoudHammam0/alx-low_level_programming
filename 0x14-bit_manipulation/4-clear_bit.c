#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to set its bit value to 0
 * @index: number of index to change its value to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 32)
		return (-1);
	num = (*n >> index) & 1;
	*n = (num << index) ^ *n;
	return (1);
}
