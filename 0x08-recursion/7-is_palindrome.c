#include "holberton.h"
int palindrome(char *str, int i, int f);
int _strlen_recursion(char *s);

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

/**
 * palindrome - The same string
 * @s: String
 * @i: Inicial char
 * @f: Ends char
 * Return: 1 if the string es palindrome or 0 if not
 */
int palindrome(char *s, int i, int f)
{
	if (i >= f)
	{
		return (1);
	}
	if (s[i] == s[f])
	{
		return (palindrome(s, i + 1, f - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: String
 * Return: An integer
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome(s, 0, len - 1));
}
