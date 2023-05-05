#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * print - prints bin in rev
 * @n: number
 * Return: Dec equivalent
 */
void print(int n)
{
	if (n > 0)
	{
		print(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - prints the bin rep of num
 * @n: number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		print(n);
	}
}
