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

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = 0;
	len = a;
	a--;
	while (a < len / 2)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
		a--;
		b++;
	}
}
