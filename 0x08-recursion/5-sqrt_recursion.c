#include "holberton.h"
int square(int n, int x);

/**
 * square - Root of a number
 * @x: Raised
 * @n: Number
 * Return: x, -1 or the same function
 */
int square(int n, int x)
{
	if (n == (x * x))
	{
		return (x);
	}
	if ((x * x) >= n)
	{
		return (-1);
	}
	else
	{
		return (square(n, x + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Natural number
 * Return: An integer
 */
int _sqrt_recursion(int n)
{
	return (square(n, 0));
}
