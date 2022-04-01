#include "main.h"
/**
 * main - prints the name of a file
 *
 * Return: void
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
