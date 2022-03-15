#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @ld: the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int last)
{
	if (last > 0)
	{
		last = last % 10;
		putchar(last + '0');
	}
	else
	{
		last = last % 10 * -1;
		putchar(last + '0');
	}
	return (last);
}
