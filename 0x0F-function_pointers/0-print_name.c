#include "function_pointers.h"

/**
 * print_name - Print a name.
 * @name: Name
 * @f: Function.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
