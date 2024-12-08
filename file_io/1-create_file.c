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

	int fd;
	ssize_t write0;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);


	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}

		write0 = write(fd, text_content, i);
		if (write0 == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
