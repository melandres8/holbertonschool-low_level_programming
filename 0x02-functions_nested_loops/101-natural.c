#include <stdio.h>
/**
 * main - All the program inside this fuctions
 * Return: 0
 **/
int main(void)
{
	int counter;
	int add;

	for (counter = 0; counter < 1024; counter++)
	{
		if ((counter % 3 == 0) || (counter % 5 == 0))
		{
			add = add + counter;
		}
	}
	printf("%d\n", add);
	return (0);
}
