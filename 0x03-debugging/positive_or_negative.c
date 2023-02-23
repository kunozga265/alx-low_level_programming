#include <stdio.h>

/**
 * positive_or_negative - checks whether a number is 0, + or -
 * @n: Number to be checked
 *
 * Return: Nothing
 */
void positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
