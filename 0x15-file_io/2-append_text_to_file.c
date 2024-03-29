#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of file
 * @text_content: null terminated string
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, q;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		q = 0;
		while (text_content[q])
			q++;

		len = write(file, text_content, q);
		if (len < 0)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
