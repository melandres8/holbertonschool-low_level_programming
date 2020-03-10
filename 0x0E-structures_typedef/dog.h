#ifndef DOG
#define DOG

/**
 * struct dog_t - Data of dog.
 * @name: Name of dog.
 * @owner: Of the dog
 * @age: Age of the dog.
 */
typedef struct dog_t
{
	char *name;
	char *owner;
	float age;
} dog_t;

/*Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
