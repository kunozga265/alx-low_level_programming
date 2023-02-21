#include "main.h"

/**
 * print_alphabet - prints letters a to z
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
