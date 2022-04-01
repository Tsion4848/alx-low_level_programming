#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: argument vector for values
 * @argc: argument count
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0 ; i < argc ; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
		}
		else if (atoi(argv[i]) >= 48 && atoi(argv[i]) <= 57)
		{
			sum = sum + atoi(argv[i]);
		}
		else{
			printf("Error\n");
			return (1);
		}
	}
	printf("%s\n", sum);
	return (0);
}
