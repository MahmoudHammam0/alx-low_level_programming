#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get the bit in specific index
 * @index: index of required bit
 * Return: value of index 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	num = (n >> index) & 1;
	if (num > 1)
		return (-1);
	return (num);
}
