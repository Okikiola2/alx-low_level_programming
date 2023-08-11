#include "main.h"

/**
 * create_file - this creates a file.
 * @filename: a pointer to the file to be created.
 * @text_content: a pointer to a string to be written to the file.
 *
 * Return: if the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ww, lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	ww = write(fd, text_content, lenn);

	if (fd == -1 || ww == -1)
		return (-1);

	close(fd);

	return (1);
}
