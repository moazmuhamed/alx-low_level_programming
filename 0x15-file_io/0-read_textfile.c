#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file  read
 * @letters: num of letters to read
 * Return: w- actual num of bytes printed and read
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *B;
	ssize_t fd;
	ssize_t M;
	ssize_t S;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	B = malloc(sizeof(char) * letters);
	S = read(fd, B, letters);
	M = write(STDOUT_FILENO, B, S);

	free(B);
	close(fd);
	return (M);
}
