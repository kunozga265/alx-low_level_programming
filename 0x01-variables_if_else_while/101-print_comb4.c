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
	int y, j;

	while (i < 8)
	{
		for (y = i + 1; y < 9; y++)
		{
			for (j = 0; j < 10; j++)
			{
				if (j > y)
				{
					putchar(i + '0');
					putchar(y + '0');
					putchar(j + '0');
					if (i != 7 || y != 8 || j != 9)
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
