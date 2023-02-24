#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size - x; y++)
			{
				_putchar(32);
			}
			for (y = 1; y <= x; y++)
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
