#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print out the change that needs to given
 * @argc: number of arguments to be passed
 * @argv: number of variables to calculate
 *
 * Return: always 0 for sucess
 */
int main(int argc, char **argv)
{
	int tot, c;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	for (tot = 0 ; c > 0 ; tot++)
	{
		if (c - 25 >= 0)
			c = c - 25;
		else if (c - 10 >= 0)
			c = c - 10;
		else if (c - 5 > 0)
			c = c - 5;
		else if (c - 2 >= 0)
			c = c - 2;
		else if (c - 1 >= 0)
			c = c - 1;
	}
	printf("%d\n", tot);
	return (0);
}
