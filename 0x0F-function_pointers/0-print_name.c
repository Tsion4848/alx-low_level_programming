#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: the function pointer
 *
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
