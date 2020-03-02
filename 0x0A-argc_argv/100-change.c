#include "holberton.h"
int change(int cents);
/**
 * main - The minimum number of coins to make change.
 * @argc: Number of arguments.
 * @argv: array pointing to arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - Calculate the change.
 * @cents: Amount of coins from main function.
 * Return: The number of coins.
 */
int change(int cents)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num;

	while (cents > 0)
	{
		if (cents >= coins[0])
		{
			cents = cents - coins[0];
		}
		else if (cents >= coins[1])
		{
			cents = cents - coins[1];
		}
		else if (cents >= coins[2])
		{
			cents = cents - coins[2];
		}
		else if (cents >= coins[3])
		{
			cents = cents - coins[3];
		}
		else if (cents >= coins[4])
		{
			cents = cents - coins[4];
		}
		num++;
	}
	return (num);
}
