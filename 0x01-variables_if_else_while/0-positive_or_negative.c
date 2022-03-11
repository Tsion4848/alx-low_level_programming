#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print it
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is %i\n", n, "positive");
	else if (n < 0)
		printf("%d is %i\n", n, "negative");
	else
		printf("%d is %i\n", n, "zero");
	return (0);
}
