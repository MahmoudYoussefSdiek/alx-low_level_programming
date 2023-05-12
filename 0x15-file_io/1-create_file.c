#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename:  name of the file to create.
 * @text_content: string to write to the file.
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int openD, letters_count, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		length = strlen(text_content);

	openD = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	letters_count = write(openD, text_content, length);

	if (openD == -1 || letters_count == -1)
		return (-1);

	close(openD);

	return (1);
}
