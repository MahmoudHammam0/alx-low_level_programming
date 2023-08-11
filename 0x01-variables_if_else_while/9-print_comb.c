#include <stdio.h>
/**
 * main - Entry point
 * Description: print single digit nums combination
 * Return: Always 0(Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
