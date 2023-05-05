#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * get_endianness - check endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c;

	c = (char *) &x;
	if (*c == 0x10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
