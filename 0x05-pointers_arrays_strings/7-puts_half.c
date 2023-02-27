#include "main.h"

/**
 * puts_half - prints last half
 * @s: pointer
 * Return: Nothing
 */
void puts_half(char *s)
{
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
	{
		for (i = j / 2; i <= j; i++)
		{
			_putchar(s[i - 1]);
		}
	}
	else
	{
		for (i = (j - 1) / 2; i <= j; i++)
		{
			_putchar(s[i - 1]);
		}
	}
	_putchar('\n');
}
