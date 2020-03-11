#ifndef DOG
#define DOG
#include <stdio.h>

/**
 * struct dog_t - Data of dog.
 * @name: Name of dog.
 * @owner: Of the dog
 * @age: Age of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
