#include <stdio.h>
/**
  * main - Entry point
  * Description: print sum of all even values in fibonacci sequence under 4m
  * Return: Always 0(Success)
  */
int main(void)
{
	unsigned long count;
	unsigned long a;
	unsigned long b;
	unsigned long c;
	unsigned long result;

	a = result = 0;
	b = 1;
	for (count = 0; count < 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			result += c;
		}
	}
	printf("%lu\n", result);
	return (0);
}
