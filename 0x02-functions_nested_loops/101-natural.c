#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum;
	sum = 0;
	

	for (i = 3 ; i * 3 < 1024 || i * 5 < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
		putchar(sum);
		putchar('\n');

	return (0);
}
