#include <stdarg.h>
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

	va_start(ap, n);

	if (separator != NULL)
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d\n", va_arg(ap, int));
		}
		va_end(ap);
		printf("\n");
	}
}
