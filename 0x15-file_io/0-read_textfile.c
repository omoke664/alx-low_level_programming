#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file to STDOUT.
 * @filename: the text file to be read
 * @letters: number of characters to be read
 * Return: w- the number of bytes read and printed
 *        0-  when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buffer);
	close(fd);
	return (w);
}
