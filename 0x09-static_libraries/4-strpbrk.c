#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - num of bytes of s consisting og accept
 * @s: pointer
 * @accept: characters to search
 * Return: Pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, k = 0, check = 0, index;
	char *p = NULL;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (accept[i] == s[k])
			{
				if (check == 0)
				{
					index = k;
				}
				else if (k <= index)
				{
					index = k;
				}
				check = 1;
			}
		}
	}
	if (check == 1)
	{
		return (s + index);
	}
	else
	{
		return (p);
	}
}
