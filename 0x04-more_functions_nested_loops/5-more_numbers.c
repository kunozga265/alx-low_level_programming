#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 10 times
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = 0;
	int x, y;

	while (i < 10)
	{
		x = 0;
		while (x < 2)
		{
			y = 0;
			while (y < 10)
			{
				if (x == 1)
				{
					_putchar(x + '0');
				}
				_putchar(y + '0');
				if (x == 1 && y == 4)
				{
					break;
				}
				y++;
			}
			x++;
		}
		_putchar('\n');
		i++;
	}
}
