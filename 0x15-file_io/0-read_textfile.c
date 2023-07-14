#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: letters to print
 * Return: actual number of letters it could read and print
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;
	int fd;
	ssize_t r, w;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (r);
}
