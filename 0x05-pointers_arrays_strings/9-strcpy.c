#include "holberton.h"

/**
 * _strcpy - Copie a string pointed
 * @dest: Destination
 * @: Sender
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
