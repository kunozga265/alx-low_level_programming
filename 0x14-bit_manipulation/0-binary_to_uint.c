#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * binary_to_uint - converts bin to dec
 * @b: binary string
 * Return: Dec equivalent
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, total = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		total *= 2;
		if (b[i] == '1')
		{
			total += 1;
		}
		i++;
	}
	return (total);
}
