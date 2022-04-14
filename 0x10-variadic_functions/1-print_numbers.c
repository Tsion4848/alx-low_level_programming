#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints varargs
 * @separator: string to be printed between numbers
 * @n: number of intgers passed
 *
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, separator);

	if (separator != NULL)
	{
		for (i = separator ; i >= 0 ; i = va_arg(ap, int))
		{
			printf("%d", i);
		}
		printf('\n');
		va_end(ap);
	}
}
