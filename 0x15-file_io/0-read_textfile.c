#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: the number of letters it could print or write or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
