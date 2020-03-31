#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file to create
 * @text_content: is a NULL
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, len;

	if (filename == NULL)
	{
		return (-1);
	}

	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o_file == -1)
	{
		return (-1);
	}
	
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{}
	}

	w_file = write(o_file, text_content, len);
	if (w_file == -1)
	{
		return (-1);
	}

	close(o_file);
	return (1);
}
