#include <stdio.h>
/**
 * main - printing alphabets in lower case
 * Return: 0 on success
 */
void print_alphabet(void);


void print_alphabet()
{
	int i;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}

