#include "main.h"

/**
 * create_file - Creates a file and writes a text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wb;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		wb = write(fd, text_content, len);
		if (wb == -1 || (size_t)wb != len)
		{
			close(fd);
			return (-1);
		}

	}

	close(fd);
	return (1);
}
