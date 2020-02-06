#include <stdio.h>
/**
 * main - Numbers
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
