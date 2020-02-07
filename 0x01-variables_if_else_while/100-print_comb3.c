#include <stdio.h>
/**
 * main - Combinations
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int u;

	for (n = '0'; n <= '9'; n++)
	{
		for (u = n + 1; u <= '9'; u++)
		{
			putchar(n);
			putchar(u);
			if (n != '8' || u != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
