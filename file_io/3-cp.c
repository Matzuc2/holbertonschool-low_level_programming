#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * handle_error - Handles errors and exits with a specified code
 * @message: The error message to display
 * @fd_from: File descriptor of the source file
 * @fd_to: File descriptor of the destination file
 * @exit_code: The exit code to return
 */
void handle_error(char *message, int from, int to, int exit1)
{
	dprintf(STDERR_FILENO, "%s", message);
	if (from != -1)
		close(from);
	if (to != -1)
		close(to);

	exit(exit1);
}
/**
 * handle_close - Handles file descriptor closing
 * @fd: File descriptor to close
 */
void handle_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies content from one file to another
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, various error codes on failure
 */
int main(int ac, char *av[])
{
	int from, to;
	ssize_t read0, write0;
	char buffer[1024];

	if (ac != 3)
		handle_error("Usage: cp file_from file_to\n", -1, -1, 97);

	from = open(av[1], O_RDONLY);
	if (from == -1)
		handle_error("Error: Can't read from file %s\n", from, -1, 98);

	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		handle_error("Error: Can't write to %s\n", from, to, 99);
	}
	while ((read0 = read(from, buffer, sizeof(buffer))) > 0)
	{
		write0 = write(to, buffer, read0);
		if (write0 != read0)
			handle_error("Error: Can't write to %s\n", from, to, 99);
	}
	if (read0 == -1)
		handle_error("Error: Can't read from file %s\n", from, to, 98);

	handle_close(from);
	handle_close(to);

	return (0);
}
