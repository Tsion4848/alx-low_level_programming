#include "main.h"
/**
 * _memset - fills a memory with a constant byte
 * @s: parameter
 * @b: a parameter
 * @n: a parameter
 *
 * Return: the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
