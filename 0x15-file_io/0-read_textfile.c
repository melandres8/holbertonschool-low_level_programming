#include "holberton.h"

#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: File name
 * @letters: Number of letters
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int o_file, r_file, w_file;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, buffer, letters);
	w_file = write(STDOUT_FILENO, buffer, r_file);

	if (w_file == -1 || r_file == -1 || o_file == -1)
	{
		return (0);
	}

	buffer[letters] = '\0';
	close(o_file);
	free(buffer);
	return (w_file);
}
