#include "holberton.h"
/**
 * print_most_numbers - Exclude two numbers 2 and 4
 * Return: nothing
 **/
void print_most_numbers(void)
{
	char num;

	num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
