#include <stdio.h>
/**
 * main - prints the string "_putchar"
 * Return: 0 on success.
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < 7 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
