#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * Return: last digit
 *
 * @num: contain the value of the num
 **/
int print_last_digit(int num)
{
	int last;

	if (num <= 0)
	{
		num = num * -1;
	}
	last = num % 10;
	_putchar(last + '0');
	return (last);
}
