#include "main.h"
#include <stdlib.h>
/**
 * _length - length of a string
 * @str: the string
 *
 * Return: the length
 */
unsigned int _length(char *str){
	
	int i;
	int count;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	return (i);
}

/**
 * string_nconcat - concatenates 2 strings
 * @s1: parameter
 * @s2: parameter
 * @n: length
 *
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j;
	int l1, l2;

	if (s2 == NULL)
	{
		s2 == "";
	}
	if (s1 == NULL)
	{
		s1 == "";
	}
	l1 = _length(s1);
	l2 = length(l2);

	if (n >= l2)
	{
		n = l2;
	}

	p = malloc(sizeof(char) * (l1 + n + 1));

	 if (p == NULL)
	{
		return (NULL);
	}
	 for (i = 0 ; i < l1 ; i++)
	 {
		 p[i] = s1[i];
	 }
	 for (j = 0 ; s2[j] != '\0' && j != n ; j++, i++)
	 {
		 p[i] = s2[j];
	 }
	 p[i] = '\0';
	 return (p);
}
