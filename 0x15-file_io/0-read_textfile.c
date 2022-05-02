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
	int fd;
	char buf[letters];

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
	{
		return 0;
	}

	read(fd, buf, letters);
	buf[letters] = '\0';

	close(fd);

	printf("buf: %s\n", buf);
}
