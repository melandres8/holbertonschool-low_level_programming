#include "holberton.h"
#include <stdio.h>
/**
 * main - Prints Holberton
 * Return: 0
 **/
int main(void)
{
	int i;
	char str[9] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
