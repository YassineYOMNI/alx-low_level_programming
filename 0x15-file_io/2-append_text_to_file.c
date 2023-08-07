#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes, wb;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
		return (-1);

	if (text_content)
	{
		wb = write(fdes, text_content, len);
		if (wb == -1 || (size_t)wb != len)
		{
			close(fdes);
			return (-1);
		}
	}

	close(fdes);
	return (1);
}
