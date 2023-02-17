#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers from 0 to 9
 * then 10 to 15 in hexadecimal
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + 87);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
