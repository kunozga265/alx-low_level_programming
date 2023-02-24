#include "main.h"

/**
 * print_square - prints a square 
 * @n: size of square
 *
 * Return: Nothing
 */
void print_square(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{

		_putchar('\n');
	}
}
