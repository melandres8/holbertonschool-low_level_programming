#include "holberton.h"

/**
 * main - Multiplies two numbers.
 * @argc: Number or arguments in a string
 * @argv: Array od arguments to the string
 * Return: 1 or 0.
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * _atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
