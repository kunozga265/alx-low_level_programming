#include "main.h"
#include <stdio.h>

/**
 * print_array - prints value of an array
 * @s: pointer
 * @n: size of array
 * Return: Nothing
 */
void print_array(int *s, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", s[i]);
		i++;
		if (i != n)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
