#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Select te correct sign
 * @s: String
 * Return: It depends
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (*ops[i].op != *s && i < 4)
	{
		i++;
	}
	if (!s || s[1] != '\0' || *s != *ops[i].op)
	{
		return (NULL);
	}
	return (ops[i].f);
}
