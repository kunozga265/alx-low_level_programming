#include "main.h"

/**
 * _islower - function
 * @c: number checked
 *
 * Description: Checks whether c is a lower alphabet character
 * Return: Nothing
 */
int _islower(int c)
{
	int check = 0, index = 0;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxy";

	if (c >= 97 && c <= 122)
	{
		check = 1;
	}
	else if (c == 0)
	{
		check = 0;
	}
	else
	{
		while (index < 26)
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
