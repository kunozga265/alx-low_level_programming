#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer
 * @src: pointer
 * @n: size of bytes to replace
 * Return: Replaced pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
