#include "main.h"
/**
 * print_number - printing integers
 * @n: the integer
 *
 */
void print_number(int n)
{
	int i;
	int rem;

	while (n < 10)
	{
		_putchar(n);
	}

	i = 0;
	rem = 0;

	while (n > 10)
	{
		i = n / 10;
		rem = n % 10;
		n = n / 10;

		_putchar(i);
	}
	_putchar(rem);
}
