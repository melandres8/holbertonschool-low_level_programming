#include "holberton.h"
#include <stdio.h>
/**
   * main - Print Holberton
    * Return: Always 0 (Success)
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
