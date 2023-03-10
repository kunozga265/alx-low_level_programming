#include <stdio.h>
#include <stdlib.h>

/**
 * print_cents - calculates cents
 * @n: number
 * Return: number of cents
 */
int print_cents(int n)
{
	int i = 1;

	if (n == 0)
	{
		return (0);
	}

	if (n % 25 == 0)
	{
		i = 25;
	}
	else if (n % 10 == 0)
	{
		i = 10;
	}
	else if (n % 5 == 0)
	{
		i = 5;
	}
	else if (n % 2 == 0)
	{
		i = 2;
	}
	return (1 + print_cents(n - i));
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n < 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", print_cents(n));
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
