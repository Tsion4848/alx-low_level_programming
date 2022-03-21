#include "main.h"
/**
 * rev_string - reversing a string
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;
	int len;

	while (s[i] != 0)
	{
		i++;
	}

	len = i;
	i = 0;
	j = len - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
