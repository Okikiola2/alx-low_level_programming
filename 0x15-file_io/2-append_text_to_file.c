#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: a pointer to the file.
 * @text_content: the string to add at the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, ww, lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	ww = write(o, text_content, lenn);

	if (o == -1 || ww == -1)
		return (-1);

	close(o);

	return (1);
}
