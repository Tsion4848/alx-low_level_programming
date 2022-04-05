#includem "main.h"
/**
 * _strdup - allocates a space in memory
 * @str: our string
 *
 * Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	int n;
	n = sizeof(str)/sizeof(char);

	if (n == 0)
	{
		return (0);
	}
	char *arr;
	arr = (int*)malloc(n * sizeof(char));

	int i;
	for (i = 0 ; i < sizeof(arr) ; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
