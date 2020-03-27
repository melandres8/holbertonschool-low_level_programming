#include "holberton.h"

/**
 * flip_bits - Flip numbers.
 * @n: Given number.
 * @m: Number to flip with the given number.
 * Return: Final number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ;
	unsigned int count = 0;

	differ = (n ^ m);

	while (differ != 0)
	{
		if (differ & 1)
		{
			count++;
		}
		differ >>= 1;
	}
	return (count);
}
