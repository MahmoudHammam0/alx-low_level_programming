int _putchar(char c);
void print_alphabet(void);
/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}
/**
 * _islower: check if the character is uppercase or lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (c);
}
/**
 * _isalpha - checks if its letter of alphabet or other character
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
/**
 * print_sign:check the sign of the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (n);
}
/**
 * _abs: print the absolute value of number
 */
int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else if (n < 0)
	{
	n = (n * -1);
	return (n);
	}
	else
	{
	return (n);
	}
	return (n);
}
