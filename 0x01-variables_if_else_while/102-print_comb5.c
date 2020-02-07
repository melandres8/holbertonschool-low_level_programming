#include <stdio.h>
/**
 * main - Printing combinations #5
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int u;
	int m;
	int e;

	for (n = '0'; n <= '9'; n++)
	{
		for (u = '0'; u <= '9'; u++)
		{
			for (m = n; m <= '9'; m++)
			{
				for (e = u + 1 ; e <= '9'; e++)
				{
					putchar(n);
					putchar(u);
					putchar(' ');
					putchar(m);
					putchar(e);
					if (n != '9' || u != '8' || m != '9' || e != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
