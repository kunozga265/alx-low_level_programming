#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - creates a file
 * @filename: string
 * @text_content: string
 * Return: Number
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i = 0, m;

	fd = open(filename, O_RDWR | O_APPEND);

	if ((filename == NULL) || (fd < 0))
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			m = write(fd, (text_content + i), sizeof(char));
			if (m < 0 || m != sizeof(char))
			{
				return (-1);
			}
			i++;
		}
	}
	return (1);
}
