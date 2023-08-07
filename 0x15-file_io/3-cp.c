
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_fd(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file: File name for error messages.
 * Return: Pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_fd - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 97 on incorrect count, 98 on read error,
 *         99 on write error, 100 on close error.
 */
int main(int argc, char *argv[])
{
	int src, dest, read_bytes, write_bytes;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = allocate_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	read_bytes = read(src, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		write_bytes = write(dest, buf, read_bytes);
		if (dest == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		read_bytes = read(src, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(buf);
	close_fd(src);
	close_fd(dest);

	return (0);
}
