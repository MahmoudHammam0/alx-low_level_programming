#include <stdio.h>
/**
 * main - Entry point
 * Description: print the largest prime factor of number 612852475143
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int a = 3;

	while (a <= (n / 2))
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
		{
			a = a + 2;
		}
	}
	printf("%ld\n", n);
	return (0);
}
