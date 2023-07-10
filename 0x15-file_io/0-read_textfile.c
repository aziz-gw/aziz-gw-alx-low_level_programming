#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename:filename to read from
 * @letters: num of letters read from a text file
 *
 * Return: 0 if the file can not be opened or read, 0 if write
 * fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (w);
}
