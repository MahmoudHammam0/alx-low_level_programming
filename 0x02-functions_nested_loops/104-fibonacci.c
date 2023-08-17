#include <stdio.h>
/**
 * main - Entry point
 * Description: print first 98 fibonacci number
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long sum;
	unsigned long g;
	unsigned long h;
	unsigned long f;
	unsigned long next;

	for (x = 1; x <= 91; x++)
	{
		printf("%lu, ", a);
		sum = a + b;
		a = b;
		b = sum;
	}
	g = a % 1000;
	a = a / 1000;
	h = b % 1000;
	b = b / 1000;
	while (x <= 98)
	{
		next = (g + h) / 1000;
		f = (g + h) - next * 1000;
		sum = (a + b) + next;
		g = h;
		h = f;
		a = b;
		b = sum;
		if (f >= 100)
			printf("%lu%lu", sum, f);
		else
			printf("%lu0%lu", sum, f);
		if (x != 98)
			printf(", ");
		x++;
	}
	putchar('\n');
	return (0);
}
