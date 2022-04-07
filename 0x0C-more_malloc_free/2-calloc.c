#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	nmemb = malloc(size * sizeof(int));

	if (nmemb == NULL)
	{
		return (NULL);
	}
	return (nmemb);
}
