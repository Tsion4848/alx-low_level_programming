#include <stdio.h>
/**
 * print_alphabet - prints lowercase letters.
 * Return: alwats 0 (success).
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
