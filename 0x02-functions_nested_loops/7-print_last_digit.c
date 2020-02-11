#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number
 * @num: Contains the value of the num
 * Return: the value of the last digit
 **/
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar((num % 10) + '0');
	return (num % 10);
}
