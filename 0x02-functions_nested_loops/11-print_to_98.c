#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers to 98
 * @n : input number to the function
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
			n--;
		}
	}
	printf("\n");
}
