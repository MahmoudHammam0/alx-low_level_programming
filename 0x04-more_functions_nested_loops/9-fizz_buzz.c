#include <stdio.h>
/**
 * main - Entry point
 * Description: print all numbers from 1 to 100 with fizz and buzz of fizzbuzz
 * Return: Always 0(Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
			printf(" ");
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}