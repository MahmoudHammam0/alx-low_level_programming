#include <stdio.h>
/**
 * main - Entry point
 * Description: print all hexadecimal numbers
 * Return: Always 0(Success)
 */
int main(void)
{
	int x = '0';
	char v = 'a';

	while (v <= 'f')
	{
		while (x <= '9')
		{
			putchar(x);
			x++;
		}
		putchar(v);
		v++;
	}
	putchar('\n');
	return (0);
}
