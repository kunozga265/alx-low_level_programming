#include "main.h"

/**
 * _strlen - swaps two numbers
 * @s: pointer
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
