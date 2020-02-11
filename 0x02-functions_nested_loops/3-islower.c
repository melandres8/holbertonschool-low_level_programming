#include "holberton.h"
/**
 * _islower - Is a function that checks the lowercase character
 * Return: 1 if c is a lowercase or 0 if not
 * @c: is a letter
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
