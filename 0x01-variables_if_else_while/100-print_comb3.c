#include <stdio.h>
/**
 * main - Entry point
 * Description: print two digit nums
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;
	int v;

	for (x = '0'; x <= '9'; x++)
	{
		for (v = (x + 1); v <= '9'; v++)
		{
			if (x == v)
			{
				v++;
			}
			putchar(x);
			putchar(v);
			if (x == '8' && v == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
