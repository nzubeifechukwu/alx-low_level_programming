#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of text file
 * @letters: numbers of letters it should read and print
 * Description: return 0 if write fails or filename is NULL
 *
 * Return: number of letters it can read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, buffer, letters);
	close(fd);

	if (r_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	free(buffer);

	if (w_bytes != r_bytes)
		return (0);

	return (r_bytes);
}
