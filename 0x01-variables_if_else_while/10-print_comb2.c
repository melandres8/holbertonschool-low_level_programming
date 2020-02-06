#include <stdio.h>
/**
 * main - 00..99
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int digits;

	for (digits = 0; digits < 100; digits++)
	{
		putchar((digits / 10) + '0');
		putchar((digits % 10) + '0');

		if (digits != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
