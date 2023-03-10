#include "main.h"
#include <stddef.h>

/**
 * _strspn - num of bytes of s consisting og accept
 * @s: pointer
 * @accept: characters to search
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int k = 0;
	int check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[0])
		{
			check = 1;
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[i + k] != accept[k])
				{
					break;
				}
			}
			break;
		}
	}
	if (check == 1)
	{
		return (i + k);
	}
	else
	{
		return (0);
	}
}
