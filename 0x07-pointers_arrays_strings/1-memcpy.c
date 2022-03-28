#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination area
 * @src: source memory area
 * @n: number of bytes
 *
 * Return: destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
