#include "main.h"
/**
 * flip_bits - calculate number of bits needed to change num to another.
 * @n: first number
 * @m: second number
 * Return: returns the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, i;

	for (i = 0; n != 0; i++)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}
	return (count);
}
