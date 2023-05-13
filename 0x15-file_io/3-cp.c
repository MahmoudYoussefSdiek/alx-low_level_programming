#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 *
 * @file: The name of the second file.
 *
 * Return: A pointer to buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file.
 *
 * @file_descriptor: The file descriptor.
 *
 * Return: void.
 */
void close_file(int file_descriptor)
{
	int c;

	c = close(file_descriptor);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file1_descriptor, file2_descriptor, read_count, write_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	file1_descriptor = open(argv[1], O_RDONLY);
	read_count = read(file1_descriptor, buffer, BUFF_SIZE);
	file2_descriptor = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file1_descriptor == -1 || read_count == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_count = write(file2_descriptor, buffer, read_count);
		if (file2_descriptor == -1 || write_count == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_count = read(file1_descriptor, buffer, BUFF_SIZE);
		file2_descriptor = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_count > 0);

	free(buffer);
	close_file(file1_descriptor);
	close_file(file2_descriptor);
	return (0);
}
