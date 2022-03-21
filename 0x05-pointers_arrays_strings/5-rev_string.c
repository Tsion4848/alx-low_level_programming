#include "main.h"
/**
 * rev_string - reversing a string
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int a;
	int b;
	int temp;
	int len;

	while(s[a] != 0)
	{
		a++;
	}

	len = a;
	a = 0;
	b = len - 1;

	while(a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
