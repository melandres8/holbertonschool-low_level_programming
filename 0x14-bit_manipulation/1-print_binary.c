#include "holberton.h"
void print(unsigned long int n);

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print(n);
}

/**
 * print - Function that prints a binary in reverse
 * @n: Given number
 */

void print(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
		print(n >> 1);

	_putchar((n & 1) + '0');
}
