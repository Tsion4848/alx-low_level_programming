#include "main.h"
/**
 * _strcmp - compares if 2 strings are equal
 * @s1: first string
 * @s2: second string
 *
 * Return: result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; i < s1 ; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else
			return (-1);
	}
}
