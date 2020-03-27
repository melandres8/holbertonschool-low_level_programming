#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Given number
 * @index: Index starts from 0
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
	{
		return (-1);
	}

	bit = 1 << index;

	*n = *n | bit;
	return (1);
}
