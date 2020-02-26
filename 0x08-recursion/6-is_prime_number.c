#include "holberton.h"
int prime(int n, int i);

/**
 * prime - Prime number calculator
 * @n: Number
 * @i: Divisor
 * Return: 1 if n is prime or 0 if not
 */
int prime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number if not 0.
 * @n: Number
 * Return: An integer
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
