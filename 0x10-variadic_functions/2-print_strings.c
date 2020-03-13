#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: Is the string to be printed between the strings.
 * @n: Is the number of strings passed to the function.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, comma;
	char *str;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		printf("%s", str);

		comma = i + 1;
		if (separator != NULL && n != comma)
		{
			printf("%s", separator);
		}
		if (str == NULL)
		{
			printf("(nil)");
		}
	}

	printf("\n");
	va_end(list);
}
