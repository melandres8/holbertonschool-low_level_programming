#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its name
 * @argc: Number of arguments in a program
 * @argv: Array of string that was passed to the program
 * Return: exit (EXIT_SUCCESS)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
