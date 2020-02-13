#include "holberton.h"
/**
 * more_numbers - Print 10 times the numbers
 * Return: nothing
 **/
void more_numbers(void)
{
	int i;
	int num = 0;

	for (i = 1; i <= 10; i++)
	{
		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		num = 0;
	}
}
