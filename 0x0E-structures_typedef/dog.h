#ifndef DOG
#define DOG
#include <stdio.h>

/**
 * struct dog_t - Data of dog.
 * @name: Name of dog.
 * @owner: Of the dog
 * @age: Age of the dog.
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
