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
	int i, j, sum;
	
	sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < 47 && argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else if (argc == 1)
			{
				printf("%s\n", 0);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
