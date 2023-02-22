#include "main.h"

/**
 * print_sign - function
 * @n: number checked
 *
 * Description: Determines whether a number is + - or 0
 * Return: Nothing
 */
int print_sign(int n)
{
	int check = 0;

	if (n > 0)
	{
		check = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		check = 0;
		_putchar(48);
	}
	else
	{
		check = -1;
		_putchar(45);
	}
	return (check);
}
