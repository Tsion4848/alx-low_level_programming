#include "main.h"
/**
 * print_line -makes a line in the terminal
 * @n: the number of timesvthe character is printed
 *
 * Return: straight line
 */
void print_line(int n)
{
	int myNum;

	for (myNum = 1; myNum <= n; myNum++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
