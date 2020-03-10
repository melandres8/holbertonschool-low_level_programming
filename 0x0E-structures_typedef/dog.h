#ifndef DOG
#define DOG

/**
 * struct dog - Data of dog.
 * @name: Name of dog.
 * @owner: Of the dog
 * @age: Age of the dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/*Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
