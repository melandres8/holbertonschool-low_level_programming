#include "holberton.h"
/**
 * _abs - Computes the absolute value
 * @num: Integer variable
 * Return: 0
 **/
int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	return (num);
}
