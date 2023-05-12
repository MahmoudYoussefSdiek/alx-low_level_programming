#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openD, letters_count, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		length = strlen(text_content);

	openD = open(filename, O_WRONLY | O_APPEND);
	letters_count = write(openD, text_content, length);

	if (openD == -1 || letters_count == -1)
		return (-1);

	close(openD);
	return (1);
}
