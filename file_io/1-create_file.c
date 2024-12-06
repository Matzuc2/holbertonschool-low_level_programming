#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Description: This function creates a new file with the given filename
 * and writes the provided text content to it. If the file already exists,
 * it will be truncated. The created file will have permissions: rw-------.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t read0;
	ssize_t write0;
	char *buffer;

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		buffer = malloc(sizeof(char) * (*text_content));

		if (buffer == NULL)
		{
			close(fd);
			return (-1);
		}
		read0 = read(fd, buffer, (*text_content));
		close(fd);
		if (read0 == -1)
		{
			free(buffer);
			return (-1);
		}
		write0 = write(fd, buffer, read0);
		free(buffer);
		if (write0 == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
