#include "holberton.h"
#include <stdio.h>
/**
 * times_table - Print table
 * Return: nothing
 **/
void times_table(void)
{
	int columna = 0;
	int fila;
	int multi;
	int ncol, nfila;

	while (columna <= 9)
	{
		for (fila = 0; fila <= 9; fila++)
		{
			multi = columna * fila;
			ncol = multi / 10;
			nfila = multi % 10;

			if (multi > 9)
			{
				_putchar(ncol + '0');
				_putchar(nfila + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(nfila + '0');
			}
			if (fila != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		columna++;
		_putchar('\n');
	}
}
