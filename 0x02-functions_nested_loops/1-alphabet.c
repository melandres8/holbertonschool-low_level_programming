#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet - Print the alphabet using _putchar function
 **/
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
