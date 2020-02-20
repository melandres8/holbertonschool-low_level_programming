#include "holberton.h"
#include <stdlib.h>
/**
 * _atoi - Convert a string to a int
 * @s: String
 * Return: The number or 0
 **/
int _atoi(char *s)
{
	int sign = 1, c;
	unsigned int num = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '-')
		{
			sign *= -1;
		}
		else if (s[c] >= '0' && s[c] <= '9')
		{
			num = (num * 10) + (s[c] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * sign);
}
