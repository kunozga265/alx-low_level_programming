#include "main.h"

/**
 * check_prime - checks if number is prime
 * @i: number
 * @num: number
 * Return: Its prime
 */
int check_prime(int i, int num)
{
	if(i == 1)
	{
		return (1);
	}
	else
	{
		if(num % i == 0)
		{
			return (0);
		}
		else
		{
			return check_prime(i - 1, num);
		}
	}
}

/**
 * is_prime_number - checks if number is prime
 * @n: number
 * Return: Its power
 */
int is_prime_number(int n)
{
	int x = n / 2;
	return check_prime(x, n);
}
