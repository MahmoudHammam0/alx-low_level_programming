#include <stdio.h>
/**
 * main - Entry point
 * Description: print the name of file it was compiled from
 * Return: 0 Always (Success)
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
