#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: main arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int idx, v;
	size_t size, sum;
	char *str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char h[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	size = strlen(argv[1]);
	h[0] = str[(size ^ 59) & 63];
	for (idx = 0, sum = 0; idx < size; idx++)
		sum += argv[1][idx];
	h[1] = str[(sum ^ 79) & 63];
	for (idx = 0, v = 1; idx < size; idx++)
		v *= argv[1][idx];
	h[2] = str[(v ^ 85) & 63];
	for (v = argv[1][0], idx = 0; idx < size; idx++)
		if ((char)v <= argv[1][idx])
			v = argv[1][idx];
	srand(v ^ 14);
	h[3] = str[rand() & 63];
	for (v = 0, idx = 0; idx < size; idx++)
		v += argv[1][idx] * argv[1][idx];
	h[4] = str[(v ^ 239) & 63];
	for (v = 0, idx = 0; (char)idx < argv[1][0]; idx++)
		v = rand();
	h[5] = str[(v ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
