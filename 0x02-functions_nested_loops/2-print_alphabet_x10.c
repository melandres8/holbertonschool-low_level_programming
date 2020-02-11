#include "holberton.h"
/**
 * print_alphabet_x10 - Print 10 the alphabet
 **/
void print_alphabet_x10(void)
{
	char alph = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		alph = 'a';
	}
}
