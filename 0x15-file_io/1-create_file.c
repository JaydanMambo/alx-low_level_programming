#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file with the given text content.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 *         If the file already exists, truncate it.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, status;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len])
		len++;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	status = write(fd, text_content, len);
	if (status == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
