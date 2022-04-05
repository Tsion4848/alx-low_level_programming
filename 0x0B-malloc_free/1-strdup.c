#include "main.h"
/**
 * _strlen - allocates a space in memory
 * @s: our string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer which contains a copy of the string
 * @str: The string to print
 *
 *
 * Return: a pointer to the duplicated string or NULL if insufficient
 * memory was available
 */
char *_strdup(char *str)
{
	int n;
	char *arr;
	if (str == NULL)
	{
		return ('\0');
	}
	n = _strlen(str);
	arr = malloc(n * sizeof(char) + 1);
	
	if (arr == NULL)
	{
		return ('\0');
	}
	else
	{
		for (n = 0 ; str[n] != '\0' ; n++)
		{
			arr[n] = str[n];
		}
	}
	arr[n] = '\0';
	return (arr);
}
