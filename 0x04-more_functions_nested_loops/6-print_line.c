#include "main.h"

/**
 * print_line - prints line
 * @c: number of times line is printed
 *
 * Return: Nothing
 */
void print_line(int c)
{
	int x;

	if (c > 0)
	{
		for (x = 0; x < c; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
