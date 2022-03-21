#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by new line
 * @str: passes the string
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0' ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
