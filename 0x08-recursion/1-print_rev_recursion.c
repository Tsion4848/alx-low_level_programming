#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 *
 */
void _print_rev_recursion(char *s)
{
	int i;

	while (s[i] == '\0')
	{
		_putchar(*s);
		i--;
		_print_rev_recursion(*s);
	}
}
