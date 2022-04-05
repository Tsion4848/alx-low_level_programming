#includem "main.h"
/**
 * _strdup - allocates a space in memory
 * @str: our string
 *
 * Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	if (str == '\0')
	{
		return (0);
	}
	int *arr;
	arr = (int*)malloc(sizeof(str) * sizeof(char));

	int i;
	for (i = 0 ; i < sizeof(arr) ; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
