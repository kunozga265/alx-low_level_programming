#include "main.h"

/**
 *   *_strncat - concantenate strings
 * @dest: pointer
 * @src: pointer
 * @n: characters to concantenate
 * Return: New string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
