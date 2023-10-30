#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * copy_file - Copies the content of a file to another file.
 * @file_from: The source file to copy from.
 * @file_to: The destination file to copy to.
 *
 * Return: 0 on success, 97 on incorrect arguments,
 *         98 on read error, 99 on write error, 100 on close error.
 */

int copy_file(const char *file_from, const char *file_to)
{
	int src_fd, dest_fd, status;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (file_from == NULL || file_to == NULL)
		return (97);
	src_fd = open(file_from, O_RDONLY);
	if (src_fd == -1)
		return (98);
	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IROTH);
	if (dest_fd == -1)
	{
		close(src_fd);
		return (99);
	}
	while ((bytes_read = read(src_fd, buffer, sizeof(buffer)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(src_fd);
			close(dest_fd);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		close(src_fd);
		close(dest_fd);
		return (98);
	}
	if (close(src_fd) == -1 || close(dest_fd) == -1)
		return (100);
	return (0);
}
