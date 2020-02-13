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
		if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			printf("FizzBuzz ");
		}

		if (counter % 5 == 0)
		{
			printf("Buzz");
			if (counter != 100)
			{
				printf(" ");
			}
		}

		if (counter % 3 == 0)
		{
			printf("Fizz ");
		}
		if (!(counter % 3 == 0) && !(counter % 5 == 0))
		{
			printf("%d ", counter);
		}
	}
	putchar('\n');
	return (0);
}
