#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * flip_bits - how many bits to flip
 * @n: number
 * @m: number
 * Return: Nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n > 0)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
