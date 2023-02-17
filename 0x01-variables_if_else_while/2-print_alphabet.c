#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet
 * Return: 0 if successful
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
