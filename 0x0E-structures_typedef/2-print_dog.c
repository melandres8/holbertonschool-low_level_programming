#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print struct dog.
 * @d: Struct pointer
 * Return: It depends
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
