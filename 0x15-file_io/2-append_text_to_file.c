#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: string to add to end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file doesn't exist user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int B, F, DAL = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (DAL = 0; text_content[DAL];)
			DAL++;
	}

	B = open(filename, O_WRONLY | O_APPEND);
	F = write(B, text_content, DAL);

	if (B == -1 || F == -1)
		return (-1);

	close(B);

	return (1);
}

