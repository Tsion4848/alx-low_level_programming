#include "main.h"
/**
 * leet - encoding a string into 1337
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	char d[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char dd[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (d[j] != '\0')
		{
			if (str[i] == d[j])
			{
				str[i] == dd[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
