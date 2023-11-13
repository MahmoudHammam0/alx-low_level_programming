/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be checked
 * @accept : substring of match characters
 * Return: number of bytes in s which match bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int x;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = n;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
		if (x == n)
			break;
	}
	return (n);
}
