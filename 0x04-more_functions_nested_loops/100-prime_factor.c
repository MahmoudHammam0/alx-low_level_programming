#include <stdio.h>
/**
 * main - Entry point
 * Description: print the largest prime factor of number 612852475143
 * Return: Always 0(Success)
 */
int main(void)
{
	long int n = 612852475143; /*number*/
	long int a; /*factors*/
	long int b; /*prime factor*/
	long int count; /*number of factors*/

	for (a = 1; a <= n; a++)
	{
		if (n % a == 0)
		{
			count = 0;
			for (b = 1; b <= a; b++)
			{
				if (a % b == 0)
				{
					count++;
				}
			}
			if (count == 2)
			{
				if (a > 100000)
					printf("%li \n", a);
			}
		}
	}
	return (0);
}
