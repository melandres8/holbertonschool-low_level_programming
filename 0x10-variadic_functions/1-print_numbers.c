#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count, comma;

	va_list list;

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, int));
		/*Quitando la ultima coma, teniendo en cuenta el caracter nulo*/
		comma = count + 1;
		if (separator != NULL && n != comma)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
