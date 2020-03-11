#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strcpy(char *dest, char *src);

/**
 * _strcpy - Copie a string pointed
 * @dest: Destination
 * @src: Sender
 * Return: A char
 */
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
 * new_dog - Function that create a new dog.
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: It depends
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int j = 0, i = 0;
	char *name_s, *owner_s;
	dog_t *doggo;

	while (name[i])
	{
		i++;
	}
	while (owner[i])
	{
		j++;
	}
	name_s = malloc(i + 1);
	if (!name_s)
	{
		return (NULL);
	}
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
