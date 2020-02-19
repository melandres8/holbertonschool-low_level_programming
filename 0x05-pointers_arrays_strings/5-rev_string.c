#include "holberton.h"
/**
 * rev_string - Reverse a word
 * @s: Contain a string
 **/
void rev_string(char *s)
{
	int i, c;
	char rev;

	for (i = 0; s[i] != '\0'; i++)
	{}

	for (c = 0, i--; c < i; c++, i--)
	{
		rev = s[c];
		s[c] = s[i];
		s[i] = rev;
	}
}
