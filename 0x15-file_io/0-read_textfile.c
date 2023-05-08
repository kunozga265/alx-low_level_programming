#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints
 * @filename: string
 * @letters: number
 * Return: Number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, m;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buff = malloc((sizeof(char) * letters));
	if (buff == NULL)
	{
		return (0);
	}
	n = read(fd, buff, letters);
	m = write(STDOUT_FILENO, buff, n);

	free(buff);
	close(fd);
	return (m);
}

