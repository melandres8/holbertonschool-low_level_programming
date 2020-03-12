#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: An int value.
 */
int main(int argc, char **argv)
{
	int (*func_ptr)(int, int);

	if (argc == 4)
	{
		func_ptr = get_op_func(argv[2]);
		if (func_ptr == NULL)
		{
			printf("Error\n");
			exit(99);

		}
		printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
