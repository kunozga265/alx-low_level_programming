#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp, *begin, *end;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	begin = s;
	end = s;
	for (i = 0; i < j - 1; i++)
	{
		end++;
	}
	for (i = 0; i < j / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
