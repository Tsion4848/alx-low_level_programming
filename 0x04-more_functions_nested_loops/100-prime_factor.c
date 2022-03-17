#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Description: print the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long p = 612852475143;
	int q;

	for (q = (int) sqrt(p); q > 2 ; q++)
	{
		if (p % q == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);
}
