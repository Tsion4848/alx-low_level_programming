#include "main.h"
/**
 * _strlen_recursion - gets the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(char s++);
	}
	return (count);
}
