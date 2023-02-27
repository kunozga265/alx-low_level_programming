#include "main.h"

/**
 * puts2 - prints every other character
 * @s: pointer
 * Return: Nothing
 */
void puts2(char *s)
{
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	while (s[i] != '\0' && i <= j)
	{
		_putchar(s[i]);
		i = i + 2;
	}
	_putchar('\n');
}
