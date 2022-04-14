#include "variadic_functions.h"
/**
 * sum_them_all - sums all the variable arguments passed
 * @n - the first argument
 *
 * Return: their sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list ap;
	int i;
	unsigned int sum = 0;

	va_start(ap, n);
	for (i = n ; i >= 0 ; i = va_arg(ap, const unsigned int))
	{
		sum+=i;
	}
	va_end(ap);
	return (sum);
}
