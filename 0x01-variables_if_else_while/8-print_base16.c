#include <stdio.h>
/**
 * main - Hexadecimal
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			for (letter = 'a'; letter <= 'f'; letter++)
			{
				putchar(letter);
			}
		}
	}
	putchar('\n');
	return (0);
}
