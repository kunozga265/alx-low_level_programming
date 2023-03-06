#include "main.h"

/**
 * _memset - fills the first n bytes with b
 * @s: pointer
 * @b: byte
 * @n: size of bytes to replace
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
