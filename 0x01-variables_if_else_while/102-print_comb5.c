#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers from 0 to 9
 * Separated by , and space
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;
	int y, j, k;

	while (i < 10)
	{
		for (y = 0; y < 9; y++)
		{
			for (k = i; k < 10; k++)
			{
				for (j = y; j < 10; j++)
				{
					if ((i != k) || (y != j))
					{
						putchar(i + '0');
						putchar(y + '0');
						putchar(32);
						putchar(k + '0');
						putchar(j + '0');
						if (i != 9 || y != 8 || k != 9 || j != 9)
						{
							putchar(',');
							putchar(32);
						}
					}
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
