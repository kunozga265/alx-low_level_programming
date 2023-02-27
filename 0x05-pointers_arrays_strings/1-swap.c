#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: pointer
 * @b: pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
