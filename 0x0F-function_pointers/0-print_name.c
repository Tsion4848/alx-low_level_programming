#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: the string
 * @f: the function pointer
 *
 * Return: function to pointer to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
