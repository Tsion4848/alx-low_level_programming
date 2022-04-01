#include "main.h"
/**
 * main - prints the name of a file
 * @argc: the number of arguments
 * @argv: the values
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++){
		_putchar(argv[0]);
	}
	_putchar('\n');

	return;
}
