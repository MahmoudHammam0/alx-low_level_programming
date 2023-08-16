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
	for (x = 1; x <= 98; x++)
	{
		printf("%lu, ", a);
		res = a + b;
		a = b;
		b = res ;
	}
	return (0);
}
