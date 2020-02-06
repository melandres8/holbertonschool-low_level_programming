#include <stdio.h>
/**
 * main - alphABET
 * Return: Always 0 (Succes)
 **/
int main(void)
{
	char alph;
	char ABET;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
		if (alph == 'z')
		{
			for (ABET = 'A'; ABET <= 'Z'; ABET++)
			{
				putchar(ABET);
			}
		}
	}
	putchar('\n');
	return (0);
}
