#include "main.h"
/**
 * _strncat - concatenates n characters from source to 
 * destination
 * @dest: the variable that accepts the string
 * @src: the string that is added to dest
 * @n: the number of characters being concatenated
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	j = 0;

	while (src[j] != 0 && j < n)
	{
		dest[i] == src[j];
		i++;
		j++;
	}
	return (dest);
}
