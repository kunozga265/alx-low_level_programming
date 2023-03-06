#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - adds and prints diagonal el of an array
 * @a: multidimension array
 * @size: array size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, pos_index = 0, pos_diagonal = 0, neg_diagonal = 0;
	int neg_index = size - 1;

	while (i < size)
	{
		pos_diagonal += a[pos_index];
		pos_index += (size + 1);
		neg_diagonal += a[neg_index];
		neg_index += (size - 1);
		i++;
	}
	printf("%d, %d\n", pos_diagonal, neg_diagonal);
}
