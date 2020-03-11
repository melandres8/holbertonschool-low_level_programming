#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strcpy(char *dest, char *src);

/**
* _strcpy - function that copies a string
* @dest: pointer of destination
* @src: string to copy
* Return: the pointer to dest
**/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/**
* new_dog - function that creates a new dog.
* @name: new name
* @age: new age
* @owner: new owner
* Return: instance
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	char *name_storage;
	char *owner_storage;
	dog_t *doggo;

	while (name[i])
		i++;
	while (owner[j])
		j++;
	name_storage =  malloc(i + 1);
	if (!name_storage)
		return (NULL);
	owner_storage = malloc(j + 1);
	if (!owner_storage)
	{
		free(name_storage);
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));
	if (!doggo)
	{
		free(name_storage);
		free(owner_storage);
		return (NULL);
	}
	_strcpy(name_storage, name);
	_strcpy(owner_storage, owner);

	doggo->name = name_storage;
	doggo->age = age;
	doggo->owner = owner_storage;

	return (doggo);
}
