#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: generate a keygen for crackme 5
 * @argc: number of command line arguments
 * @argv: array of strings of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned int idx, v;
	size_t size = strlen(argv[1]), sum;
	char *s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char h[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	h[0] = s[(size ^ 59) & 63];
	for (idx = 0, sum = 0; idx < size; idx++)
		sum += argv[1][idx];
	h[1] = s[(sum ^ 79) & 63];
	for (idx = 0, v = 1; idx < size; idx++)
		v *= argv[1][idx];
	h[2] = s[(v ^ 85) & 63];
	for (v = argv[1][0], idx = 0; idx < size; idx++)
		if ((char)v <= argv[1][idx])
			v = argv[1][idx];
	srand(v ^ 14);
	h[3] = s[rand() & 63];
	for (v = 0, idx = 0; idx < size; idx++)
		v += argv[1][idx] * argv[1][idx];
	h[4] = s[(v ^ 239) & 63];
	for (v = 0, idx = 0; (char)idx < argv[1][0]; idx++)
		v = rand();
	h[5] = s[(v ^ 229) & 63];
	printf("%s\n", h);
	return (0);
}
