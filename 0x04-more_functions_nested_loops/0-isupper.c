#include "holberton.h"
/**
 * _isupper - Checks for uppercase characters
 * Return: 1 or 0
 * @c: contains the value
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
