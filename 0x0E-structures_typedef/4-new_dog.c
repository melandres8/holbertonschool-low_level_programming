#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strcpy(char *dest, char *src);

/**
* _strcpy - Copies a strings.
* @dest: Destination pointer
* @src: String source
* Return: Dest pointer
**/

char *_strcpy(char *dest, char *src)
{
	int counter;

	for (counter = 0; src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	dest[counter] = '\0';

	return (dest);
}

/**
* new_dog - function that creates a new dog.
* @name: new name
* @age: new age
* @owner: new owner
* Return: It depends
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	char *name_s;
	char *owner_s;
	dog_t *doggo;

	while (name[i])
		i++;
	while (owner[j])
		j++;
	name_s =  malloc(i + 1);
	if (!name_s)
		return (NULL);
	owner_s = malloc(j + 1);
	if (!owner_s)
	{
		free(name_s);
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));
	if (!doggo)
	{
		free(name_s);
		free(owner_s);
		return (NULL);
	}
	_strcpy(name_s, name);
	_strcpy(owner_s, owner);

	doggo->name = name_s;
	doggo->age = age;
	doggo->owner = owner_s;

	return (doggo);
}
