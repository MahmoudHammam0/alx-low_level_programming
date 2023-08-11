#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet except q and e
 * Return: Always 0(Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e')
		x++;
		if (x == 'q')
		x++;
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
