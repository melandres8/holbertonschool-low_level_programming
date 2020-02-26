#include "holberton.h"

/**
 * factorial - Print the factorial result of a int
 * @n: Factiral number
 * Return: An integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
