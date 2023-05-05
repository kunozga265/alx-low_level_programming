#include "main.h"

/**
 * clear_bit - subtracts from number
 * @n: number
 * @index: number
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int dec = 1;

	if (index < 32)
	{
		while (index > 0)
		{
			dec *= 2;
			index--;
		}
		if (dec <= *n)
		{
			*n -= dec;
		}
		else
		{
			*n = 0;
		}
		return (1);
	}
	else
	{
		return (-1);
	}
}
