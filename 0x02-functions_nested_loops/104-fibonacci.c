#include <stdio.h>
/**
 * main - Entry point
 * Description: print first 98 fibonacci number
 * Return: Always 0(Success)
 */
int main(void)
{
	long unsigned int a = 1;
	long unsigned int b = 2;
	int x;
	long unsigned int res;
	for (x = 1; x <= 97; x++)
	{
		printf("%lu", a);
		if (x == 97)
			break;
		putchar(',');
		putchar(' ');
		res = a + b;
		a = b;
		b = res ;
	}
	putchar('\n');
	return (0);
}
