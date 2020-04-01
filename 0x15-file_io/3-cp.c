#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments
 * @argv: Array arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int o_file1, o_file2, r_file1 = 1024, w_file2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	o_file1 = open(argv[1], O_RDONLY);
	if (o_file1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);

	o_file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (o_file2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);

	while (r_file1 == 1024)
	{
		r_file1 = read(o_file1, buffer, 1024);
		w_file2 = write(o_file2, buffer, r_file1);
	}

	if (r_file1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	if (w_file2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);

	if (close(o_file1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_file1);
		exit(100);
	if (close(o_file2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_file2);
		exit(100);

	return (0);
}
