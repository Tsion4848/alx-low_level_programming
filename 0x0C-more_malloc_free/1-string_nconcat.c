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

	if (*s2 == NULL)
	{
		*s2 == "";
	}

	if (n >= _length(*s2))
	{
		p = malloc((Sizeof(char) * ((_length(*s1) + (_length(*s2))) * sizeof(int))) + 1);
	}
	 p = malloc((sizeof(char) * (_length(*s1) + n) *Sizeof(int)) + 1);

	 if (p == NULL)
	{
		return ('\0');
	}
	 return (p);
}
