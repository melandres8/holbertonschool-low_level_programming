#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: File name
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, len;

	if (filename == NULL)
	{
		return (-1);
	}

	o_file = open(filename, O_WRONLY | O_APPEND, 0600);
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
		close(o_file);
		return (-1);
	}

	close(o_file);
	return (1);
}
