#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - check the code
 * @ac: arg count
 * @av: arg values
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char e1[28] = "Usage: cp file_from file_to\n";
	char e2[28] = "Error: Can\'t read from file ";
	char e3[22] = "Error: Can\'t write to ";
	char e4[22] = "Error: Can\'t close fd ";
	char endl = '\n';
	char *f_name;
	int fd_from, fd_to, i = 0;
	ssize_t n;

	if (ac != 3)
	{
		write(STDERR_FILENO, e1, 28);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);

	if (fd_from < 0)
	{
		write(STDERR_FILENO, e2, 28);
		f_name = av[1];
		while (f_name[i] != '\0')
		{
			write(STDERR_FILENO, f_name + i, sizeof(char));
			i++;
		}
		write(STDERR_FILENO, &endl, 1);
		exit(98);
	}

	fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	
	if (fd_to < 0)
	{
		write(STDERR_FILENO, e3, 21);
		f_name = av[2];
		i = 0;
		while (f_name[i] != '\0')
		{
			write(STDERR_FILENO, f_name + i, sizeof(char));
			i++;
		}
		write(STDERR_FILENO, &endl, 1);
		exit(99);
	}
	else
	{
		f_name = av[1];
		i = 0;

		while (1)
		{
			n = read(fd_from, f_name + i, 1024);

			if (n < 1)
			{
				break;
			}

			write(fd_to, f_name + i, n);
			i += n;
		}
	}

	if (close(fd_from) < 0)
	{
		write(STDERR_FILENO, e4, 22);
		write(STDERR_FILENO, &fd_from, sizeof(fd_from));
		exit(100);
	}
	else if (close(fd_to) < 0)
	{
		write(STDERR_FILENO, e4, 22);
		write(STDERR_FILENO, &fd_to, sizeof(fd_to));
		exit(100);
	}

	return (0);
}
