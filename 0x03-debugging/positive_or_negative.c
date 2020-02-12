#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
   * main - Positive anything is better than negative nothing.
    * Return: Always 0 (Success)
     **/
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
