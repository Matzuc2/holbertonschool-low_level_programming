#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t read0;
	ssize_t write0;
	char *buffer;

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read0 = read(fd, buffer, letters);
	close(fd);

	if (read0 == -1)
	{
		free(buffer);
		return (0);
	}

	write0 = write(STDOUT_FILENO, buffer, read0);
	free(buffer);
	if (read0 != write0 || write0 == -1)
	{
		return (0);
	}
	return (write0);
}

