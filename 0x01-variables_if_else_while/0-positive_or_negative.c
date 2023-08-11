#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 * Description: this program compare if number is positive or negative
 * Return: Always 0 (Success)
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	    printf("Number: %i is positive\n ", n);
	}
	else if (n == 0)
	{
	    printf("Number: %i is zero\n", n);
	}
	else
	{
	    printf("Number: %i is negative\n", n);
	}
	return (0);
}
