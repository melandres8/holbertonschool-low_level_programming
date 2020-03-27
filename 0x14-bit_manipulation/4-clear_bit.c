#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Given number
 * @index: Index starts from 0
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ind;

	if (index > 63)
	{
		return (-1);
	}

	ind = (1 << index);
	*n &= ~ind;
	return (1);
}
