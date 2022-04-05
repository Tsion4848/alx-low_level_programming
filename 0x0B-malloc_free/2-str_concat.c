#include "main.h"
/** str_concat - concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int n;
	n = (sizeof(s1) + sizeof(s2))/sizeof(char);

	int *arr;

	arr = (int*)malloc(n * sizeof(char) + 1);

	arr = strcat(s1 , s2);
	arr = strcat(arr , '\0');

	return (arr);
}
