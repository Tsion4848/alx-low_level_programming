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
	char *ret = dest;

	while (*dest)
		dest++;

	while (*src && n--)
		*dest++ = *src++;
	
	*dest = '\0';
	return (ret);
}
