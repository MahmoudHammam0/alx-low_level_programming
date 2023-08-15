#include "main.h"
/**
 * jack_bauer - print every minute of the day of jack baur
 */
void jack_bauer(void)
{
	int a = '0';

	while (a <= '2')
	{
		int b = '0';

		while (b <= '9')
		{
			int c = '0';

			if (a == '2' && b == '4')
				break;
			while (c <= '5')
			{
				int d = '0';

				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
