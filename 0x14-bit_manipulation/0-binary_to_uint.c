#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: string of 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int l, i, add;

	add = 0;

	if (b != NULL)
	{
		for (l = 0 ; b[l] != '\0' ; l++)
		{
			if (b[l] != 48 && b[l] != 49)
			{
				return (0);
			}
		}

		for (i = 0, l-- ; l >= 0 ; l--)
		{
			add = add + ((b[l] - '\0') << i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (add);
}
