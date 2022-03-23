#include "main.h"
/**
 * _strncpy - copies n characters from one
 * string to another
 * @dest: input parameter string
 * @src: input parameter string
 * @n: the number of characters
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
