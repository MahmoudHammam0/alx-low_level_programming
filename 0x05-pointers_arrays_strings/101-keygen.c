#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: generates random valid passwords for the program 101-crackme.
 * Return: Always 0(Success)
 */
int main(void)
{
	int x = 0;
	char a;

	srand(time(0));

	while (x <= 2646)
	{
		a = rand() % 128;
		write(1, &a, 1);
		x = x + a;
	}
	a = 2772 - x;
	write(1, &a, 1);
	return (0);
}
