#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of times the diagonal line is printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{

		_putchar('\n');
	}
}
