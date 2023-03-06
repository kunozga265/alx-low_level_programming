#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds needle in haystack
 * @haystack: pointer
 * @needle: pointer
 * Return: Pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, k = 0, check = 0;
	char *p = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			check = 1;
			for (k = 0; needle[k] != '\0'; k++)
			{
				if (haystack[i + k] != needle[k])
				{
					check = 0;
					break;
				}
			}
			break;
		}
	}
	if (check == 1)
	{
		return (haystack + i);
	}
	else
	{
		return (p);
	}
}
