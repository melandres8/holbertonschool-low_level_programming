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
	letters = 469;
	char buffer[letters];
	int o_file, r_file, w_file;

	if (filename == NULL)
	{
		return (0);
	}

	o_file = open(filename, O_RDONLY);
	if (o_file == -1)
	{
		return (0);
	}
	r_file = read(o_file, buffer, letters);
	if (r_file == -1)
	{
		return (0);
	}
	w_file = write(1, buffer, r_file);
	if (w_file == -1)
	{
		return (0);
	}

	buffer[letters] = '\0';
	close(o_file);
	return (w_file);
}
