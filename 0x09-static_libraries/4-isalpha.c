#include "main.h"

/**
 * _isalpha - function
 * @c: number checked
 *
 * Description: Checks whether c is an alphabetical character
 * Return: Nothing
 */
int _isalpha(int c)
{
	int check = 0, index = 0;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		check = 1;
	}
	else if (c == 0)
	{
		check = 0;
	}
	else
	{
		while (index < 52)
		{
			if (c == alphabet[index])
			{
				check = 1;
			}
			index++;
		}
	}
	return (check);
}
