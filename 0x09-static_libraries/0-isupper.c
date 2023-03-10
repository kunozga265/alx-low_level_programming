#include "main.h"

/**
 * _isupper - function
 * @c: number checked
 *
 * Description: Checks whether c is an alphabetical character
 * Return: Nothing
 */
int _isupper(int c)
{
	int check = 0, index = 0;
	char alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (index < 26)
	{
		if (c == alphabet[index])
		{
			check = 1;
		}
		index++;
	}
	return (check);
}
