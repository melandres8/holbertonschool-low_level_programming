#include <stdio.h>
/**
 * main - Combinations 4
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int u;
	int m;

	for (n = '0'; n <= '9'; n++)
	{
		for (u = n + 1; u <= '9'; u++)
		{
			for (m = u + 1; m <= '9'; m++)
			{
				putchar(n);
				putchar(u);
				putchar(m);
				if (n != '7' || u != '8' || m != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
