#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of arguments.
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	double sum = 0.0;
	unsigned int i;

	/*Inicializando list con el nnumero de argumentos variable*/
	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	/*Recorriendo el numero de argumentos entregados*/
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
