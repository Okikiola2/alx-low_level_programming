#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file print to STDOUT.
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: w- number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	k = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, k);

	free(buff);
	close(fd);
	return (w);
}
