#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: the function pointer
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for(i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
