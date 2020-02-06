#include <stdio.h>
/**
 * main - Print the alphabet in lowercase.
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char alph = 'a';

	while (alph != '{')
	{
		putchar(alph);
		++alph;
	}
	putchar('\n');
	return (0);
}
