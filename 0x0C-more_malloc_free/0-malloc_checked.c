#include "main.h"
/**
 * malloc_checked - allocates  memory using malloc
 * @b: parameter
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *)malloc(b * sizeof(int));

	if (p == NULL)
	{
		return;
	}
}
