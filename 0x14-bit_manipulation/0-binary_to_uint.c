#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: string of 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d, i;

	for (d = 0, i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] == '1')
			d = (d << 1) | 1;
		else if (b[i] == '0')
			d <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (d);
}
