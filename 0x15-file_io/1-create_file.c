#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: null terminated string
 *
 * Return: 1 if success and -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	fd = open(filename, O_RDWR, 0600);
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filename, O_CREATE)
	}
	if (fd != -1)
	{
		truncate(filename, letters);
	}
	return (1);
}
