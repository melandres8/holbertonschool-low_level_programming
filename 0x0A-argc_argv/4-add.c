#include "holberton.h"
#include <ctype.h>
int _isdigit(char *c);

/**
 * _isdigit - Program that check a digit
 * @c: Pointer to a char
 * Return: return 1 if is a digit or 0 if not
 */
int _isdigit(char *c)
{
	int counter;
	
	for (counter = 0; c[counter] != '\0'; counter++)
	{
		if (isdigit(c[counter]) == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Multiplies two numbers.
 * @argc: Number or arguments in a string
 * @argv: Array od arguments to the string
 * Return: 1 or 0.
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
