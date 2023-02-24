#include "main.h"

/**
 * _isdigit - function
 * @c: number checked
 *
 * Description: Checks whether c is a digit
 * between 0 and 9
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int check = 0, index = 0;
	char digits[10] = "0123456789";

	if (c >= 0 && c <= 9)
	{
		check = 1;
	}
	else
	{
		while (index < 10)
		{
			if (c == digits[index])
			{
				check = 1;
			}
			index++;
		}
	}
	return (check);
}
