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
	int *p = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
