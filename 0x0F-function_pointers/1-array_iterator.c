#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: the array
 * @size: size of the array
 * @action: the function pointer
 *
 * Return: the pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	for (i = 0 ; i < size ; i++)
	{
		action(array);
	}
}
