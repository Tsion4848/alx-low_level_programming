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
	unsigned int n;
	char *arr;

	n = 0;
	
	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		arr = malloc(sizeof(char) * size);
		if (array == '\0')
		{
			return ('\0');
		}
		else
		{
			while(n < size)
			{
				arr[i] = c;
				i++;
			}
		}
		return (arr);
	}
}
