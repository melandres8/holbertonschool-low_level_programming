#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog.
 * @d: Pointer to a struct
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
