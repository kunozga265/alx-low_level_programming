#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * get_bit - prints bit at index
 * @n: number
 * @index: number
 * Return: Nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int check = -1;

	while (n > 0)
	{
		if (i == index)
		{
			check = i;
			break;
		}
		n >>= 1;
		i++;
	}
	if (check > -1)
	{
		return (n & 1);
	}
	else
	{
		return (-1);
	}
}
