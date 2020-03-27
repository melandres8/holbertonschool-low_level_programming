#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number
 * @index: Index start from 0
 * Return: The value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = (n >> index);
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		bit = n >> index;
		return (bit & 1);
	}
}
