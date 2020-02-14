#include <stdio.h>
/**
 * main - Prime factors
 * Return: 0
 **/
int main(void)
{
	long i = 2;
	long num = 612852475143;

	while (i < num)
	{
		if (num % i == 0)
		num /= i;
		i++;
	}
	printf("%li\n", num);
	return (0);
}
