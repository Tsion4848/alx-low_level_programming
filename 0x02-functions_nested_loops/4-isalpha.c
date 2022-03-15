#include <stdio.h>
/**
 * _isalpha - tests if a character is from english alphabet
 * or not
 * Return: 1 if the character is an english alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
