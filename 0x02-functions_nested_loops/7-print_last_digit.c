#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - Print the last digit of a number
 * @num: Contains the value of the num
 * Return: the value of the last digit
 **/
int print_last_digit(int num)
{
	int last;

	if (num < 0)
	{
		num = num * -1;
	}
	last = num % 10;
	_putchar(last + '0');
	return (last);
}
