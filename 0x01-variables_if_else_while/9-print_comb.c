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

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
