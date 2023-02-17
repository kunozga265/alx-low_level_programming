#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in reverse
 * Return: 0 if successful
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
