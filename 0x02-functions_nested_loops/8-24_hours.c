#include "main.h"

/**
 * jack_bauer - function
 *
 * Description: Prints every minute of the day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int j, k, l, m;

	for (j = 0; j < 3; j++)
	{
		for (k = 0; k < 10; k++)
		{
			for (l = 0; l < 6; l++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar(j + '0');
					_putchar(k + '0');
					_putchar(58);
					_putchar(l + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}

			if (j == 2 && k == 3)
			{
				break;
			}
		}
	}
}
