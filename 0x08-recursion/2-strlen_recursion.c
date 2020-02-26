#include "holberton.h"

/**
 * _strlen_recursion - Prints the string lenght
 * @s: String
 * Return: An integer
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0' || !*s)
	{
		return (0);
	}
	else
	{
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}
