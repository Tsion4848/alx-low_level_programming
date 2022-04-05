#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: the size of the char
 * @c: the character
 *
 * Return: the character
 */
char *create_array(unsigned int size, char c)
{
	int n;
	
	if (size == 0)
	{
		return (0);
	}
	c = (int*)malloc(size * sizeof(char));
	return (c);
}
