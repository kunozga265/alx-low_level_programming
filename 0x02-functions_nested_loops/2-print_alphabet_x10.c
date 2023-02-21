#include "main.h"

/**
 * print_alphabet_x10 - prints letters a to z, 10 times
 *
 * Description: Prints the alphabet 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int x = 0, i;

	while (x < 10)
	{
		i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		x++;
	}
}
