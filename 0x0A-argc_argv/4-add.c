#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - checks if argv is a number
 * @number: array of characters
 * Return: 0 if success
 */
int isNumber(char number[])
{
	int i = 0;

	if (number[0] == '-')
	{
		i = 1;
	}
	for (; number[i] != 0; i++)
	{
		if (!isdigit(number[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, check = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isNumber(argv[i]))
			{
				check = 0;
				break;
			}
			sum += atoi(argv[i]);
			check = 1;
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	if (check == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
