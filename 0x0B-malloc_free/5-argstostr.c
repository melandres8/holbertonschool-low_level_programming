#include "holberton.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Number of args.
 * @av: Array of args.
 * Return: A pointer to a char.
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0, str = 0;
	char *ptr;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			count++;
		}
		count++;
	}
	count++;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[str] = av[i][j];
			str++;
		}
		ptr[str] = '\n';
		str++;
	}
	ptr[str] = '\0';
	return (ptr);
}
