#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Function that prints all natural numbers
 * Return: nothing
 * @n: contain all numbers
 **/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
