#include <stdio.h>
/**
 * main - I don't know
 * Return: 0
 **/
int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (counter % 5 == 0 && 3 != 0)
		{
			if (counter != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}

		else if (counter % 3 == 0 && 5 != 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", counter);
		}
	}
	putchar('\n');
	return (0);
}
