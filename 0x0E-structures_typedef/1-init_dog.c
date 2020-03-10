#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a variable.
 * @d: Struct pointer
 * @name: Name pointer of a dog
 * @age: Age
 * @owner: Pointer of a dog.
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
