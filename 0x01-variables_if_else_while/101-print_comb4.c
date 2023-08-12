#include <stdio.h>
/**
 * main - Entry point
 * Description: print combination of digits
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;
	int v;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (v = (x + 1); v <= '9'; v++)
		{
			for (z = (v + 1); z <= '9'; z++)
			{
				if (x == v)
				{
					v++;
				}
				putchar(x);
				putchar(v);
				putchar(z);
				if (x == '7' && v == '8' && z == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
