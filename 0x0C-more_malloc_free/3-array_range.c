#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimal state
 * @max: maximal state
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; min <= max ; min++, i++)
	{
		arr[i] = min;
	}
	return (arr);
}
