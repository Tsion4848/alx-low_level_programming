#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: the hour from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 23 ; x++)
	{
		for (y = 0 ; y <= 59 ; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(58);
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
		}
	}

}
