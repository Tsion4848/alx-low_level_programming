#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: the filename
 * @letters: number of letters it should print
 *
 * Return: actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf = malloc(sizeof(char) * letters);
	
	if (filename == NULL)
	{
		return (0);
	}

/*OPEN*/
	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	{
		return (0);
	}
/*READ*/
	r = read(fd, buf, letters);
	if (r == -1)
	{
		return (0);
	}
/*WRITE*/
	w = write(STDOUT_FILENO, buf, r);
	if ( w == -1)
	{
		return (0);
	}
	close(fd);

	return (w);
}
