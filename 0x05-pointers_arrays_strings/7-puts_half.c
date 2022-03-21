#include "main.h"
/**
 * puts_half - prints second half string
 * @str: the string;
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int t;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '0')
	{
		t = str[i];
		i++;
		_putchar(t);
	}
	_putchar('\n');
}
