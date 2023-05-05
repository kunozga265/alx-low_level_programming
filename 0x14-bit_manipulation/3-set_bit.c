#include "main.h"

/**
 * set_bit - prints bit at index
 * @n: number
 * @index: number
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int inc = 1;

	if (index < 32)
	{
		while (index > 0)
		{
			inc *= 2;
			index--;
		}
		*n += inc;
		return (1);
	}
	else
	{
		return (-1);
	}
}
