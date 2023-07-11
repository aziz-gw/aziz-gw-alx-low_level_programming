#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */

/* define BUFF_SIZE 1024 */

int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, BUFF_SIZE);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, BUFF_SIZE);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}



/**
 * create_buff - creates a buffer 1024 bytes wide
 * @file: file buffer is storing chars
 *
 *
 * Return: pointer to the allocated memory
 */

char *create_buff(char *file);

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * BUFF_SIZE);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes fd
 * @fd: fd
 *
 * Return: nothing
 */

void close_file(int fd);
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
