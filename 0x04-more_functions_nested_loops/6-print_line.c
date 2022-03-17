#include "main.h"
/**
 * print_line -draws a line in the terminal
 * @n: the number of times that the special character is printed
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int xx = 1;

	while (xx <= n)
	{
		_putchar(95);
		xx++;
	}
	_putchar('\n');
}
