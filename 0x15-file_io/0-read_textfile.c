#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: A pointer to file.
 * @letters: The number of letters it should read and print.
 *
 * Return: letters_count or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openD, read_count, letters_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	openD = open(filename, O_RDONLY);
	read_count = read(openD, buffer, letters);
	letters_count = write(STDOUT_FILENO, buffer, read_count);

	if (openD == -1 ||
		read_count == -1 ||
		letters_count == -1 ||
		letters_count != read_count)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openD);

	return (letters_count);
}
