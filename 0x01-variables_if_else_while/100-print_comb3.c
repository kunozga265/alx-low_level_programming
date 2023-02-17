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
	int y;

	while (i < 9)
	{
		for (y = 0; y < 10; y++)
		{
			if (y > i)
			{
				putchar(i + '0');
				putchar(y + '0');
				if (i != 8 || y != 9)
				{
					putchar(',');
					putchar(32);

				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
