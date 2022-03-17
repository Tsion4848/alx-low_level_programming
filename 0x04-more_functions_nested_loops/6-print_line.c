#include "main.h"
/**
 * print_line -makes a line in the terminal
 * @n: the number of timesvthe character is printed
 *
 * Return: straight line
 */
void print_line(int n)
{
	int myNum = 1;

	while(myNum <= n)
	{
		_putchar(95);
		myNum++;
	}
	_putchar('\n');
}
