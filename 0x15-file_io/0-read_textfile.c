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
	ssize_t i = 0, n, m;
	char *buff;

	buff = malloc((sizeof(char) * letters));
	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	n = read(fd, buff, letters);

	if ((filename == NULL) || (fd < 0) || (n < 0))
	{
		return (0);
	}

	while (i < n)
	{
		m = write(STDOUT_FILENO, (buff + i), sizeof(char));
		if (m < 0 || m != sizeof(char))
		{
			return (0);
		}
		i++;
	}
	return (n);
}

