#include "holberton.h"
#include <stdlib.h>
/**
 * _atoi - Convert a string to a int
 * @s: String
 * Return: The number or 0
 **/
int _atoi(char *s)
{
	int sign = 1, counter;
	unsigned int num = 0;

	for ( counter = 0; s[counter] != '\0'; counter++)
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * sign);
}
