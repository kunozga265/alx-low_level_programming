#include "main.h"

/**
 * _strchr - pointer to the first occurrence of the
 * character c  in the string s, or NULL if the
 * character is not found
 * @s: pointer
 * @c: character
 * Return: Pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	return (s + i);
}
