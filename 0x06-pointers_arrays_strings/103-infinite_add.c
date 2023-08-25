#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of (r) buffer
 * Return: pointer of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a;
	int b;
	int v;
	int z;
	int i;
	int j;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > size_r || b > size_r)
		return (0);
	i = 0;
	for (a = a - 1, b = b - 1, v = 0; v < size_r - 1; a--, b--, v++)
	{
		j = i;
		if (a >= 0)
			j = j + n1[a] - '0';
		if (b >= 0)
			j = j + n2[b] - '0';
		if (a < 0 && b < 0 && j == 0)
		{
			break;
		}
		i = j / 10;
		r[v] = j % 10 + '0';
	}
	r[v] = '\0';
	if (a >= 0 || b >= 0 || i)
		return (0);
	for (v = v - 1, z = 0; z < v; v--, z++)
	{
		i = r[v];
		r[v] = r[z];
		r[z] = i;
	}
	return (r);
}
