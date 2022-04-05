#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i ;
	int j ;
	int *arr;
	int **arr2;

	arr = malloc(sizeof(int) * width *height);

	if (width == 0 || height == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0 ; i < width ; i++)
		{
			for (j = 0 ; j < height ; j++)
			{
				*arr2 = arr[i][j];
			}
		}
		return (arr2);
	}
}
