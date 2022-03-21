#include "main.h"
/**
 * rev_string - reversing a string
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char str[400];

	while (*(s + a))
	{
		*(str + a) = *(s + b);
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		*(s + a) = *(str + b);
		b++;
		a--;
	}
}
