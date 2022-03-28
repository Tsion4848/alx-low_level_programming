#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix
 *
 * Return: the number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	
	int j;

	while (s[i] != '\0')
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
		i++;
		if (s[i] == ' ')
		{
			break;
		}
	}
	return (count);
}
