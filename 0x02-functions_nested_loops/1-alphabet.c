#include <stdio.h>
/**
 * print_alphabet - printing alphabets in lower case
 * Return: nothing.
 */

void print_alphabet(void)
{
	int i;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

