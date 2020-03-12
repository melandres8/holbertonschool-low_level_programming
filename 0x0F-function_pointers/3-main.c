#include "function_pointers.h"
#include <string.h>

/**
 * main - Entry point.
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: An int value.
 */
int main(int argc, char **argv)
{
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[3] == '0') && (strcmp(argv[2], "/") == 0 ||
		strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (strcmp(argv[2], "*") && strcmp(argv[2], "/")
		&& strcmp(argv[2], "-") && strcmp(argv[2], "+")
		&& strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}

	func_ptr = get_op_func(argv[2]);
	printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));
}
