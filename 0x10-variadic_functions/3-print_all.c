#include "variadic_functions.h"

void fun_char(va_list chr)
{
	printf("%c", va_arg(chr, int));
}

void fun_int(va_list integer)
{
	printf("%i", va_arg(integer, int));
}

void fun_float(va_list flt)
{
	printf("%f", va_arg(flt, double));
}

void fun_str(va_list str)
{
	char *string;
	string = va_arg(str, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}

/**
 * print_all - Function that prints anything.
 * @format: List of types of arguments passed to the function.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;
	char *comma = "";

	va_f form[] = {
		{"c", fun_char},
		{"i", fun_int},
		{"f", fun_float},
		{"s", fun_str},
		{NULL, NULL}
	};

	va_start(list, format);

	i = 0;
	while (format[i] != '\0' && format)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form[j].va)
			{
				printf("%s", comma);
				form[j].f(list);
				comma = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(list);
	printf("\n");
}