#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet
 * in lower then upper
 * Return: 0 if successful
 */
int main(void)
{
	char alphabet_l[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet_u[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet_l[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet_u[i]);

	}
	putchar('\n');
	return (0);
}
