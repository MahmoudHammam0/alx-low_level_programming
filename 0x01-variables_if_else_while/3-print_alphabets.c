#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabetALPHABET
 * Return: Always 0(Success)
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (ALPHABET <= 'Z')
	{
		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
