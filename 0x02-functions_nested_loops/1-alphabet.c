#include <stdio.h>
/**
 * main - printing alphabets in lower case
 * Return: 0 on success
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int i;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

