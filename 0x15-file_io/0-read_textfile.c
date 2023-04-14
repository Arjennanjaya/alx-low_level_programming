#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: the name of the file the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print, return 0 if
 * the filename is NULL, or fails to write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_wrote;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	n_read = read(fd, buf, letters);
	if (n_read == -1)
		return (0);
	n_wrote = write(STDOUT_FILENO, buf, n_read);
	if (n_wrote == -1 || n_wrote != n_read)
		return (0);
	free(buf);
	close(fd);

	return (n_wrote);
}
