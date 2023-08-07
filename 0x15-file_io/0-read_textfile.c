#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ob, rb, wb;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	ob  = open(filename, O_RDONLY);
	if (ob == -1)
	{
		free(buffer);
		return (0);
	}

	rb  = read(ob, buffer, letters);
	if (rb  == -1)
	{
		free(buffer);
		close(ob);
		return (0);
	}

	wb  = write(STDOUT_FILENO, buffer, rb);
	if (wb  == -1 || wb != rb)
	{
		free(buffer);
		close(ob);
		return (0);
	}

	free(buffer);
	close(ob);
	return (wb);
}
