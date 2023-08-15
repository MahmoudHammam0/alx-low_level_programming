/**
 * print_alphabet - print alphabet in lowercase followed by new line
 * Return: Always 0(Success)
 */
int _putchar(char c);
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
