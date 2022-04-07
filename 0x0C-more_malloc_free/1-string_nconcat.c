#include "main.h"
/**
 * _length - length of a string
 * @str: the string
 *
 * Return: the length
 */
int _length(char *str){
	
	int i;
	int count;

	for (i == 0 ; str[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
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

	if (*s2 == NULL)
	{
		*s2 == "";
	}
	if (*s1 == NULL)
	{
		*s1 == "";
	}

	if (n >= _length(*s2))
	{
		n = _length(s2);
	}
	p = malloc(sizeof(char) * (_length(s1) + n + 1));

	 if (p == NULL)
	{
		return (NULL);
	}
	 for (i == 0 ; i < _length(s1) ; i++)
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
