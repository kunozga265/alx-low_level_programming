#include "main.h"

/**
 * _print_chessboard - prints array
 * @a: multidimension array
 * Description: Prints array
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, k;

	while (i < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(a[i][k]);
			k++;
		}
		_putchar('\n');
		i++;
	}
}
