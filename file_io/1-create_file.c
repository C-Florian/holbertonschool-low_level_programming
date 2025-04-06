#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * create_file - creates a file and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	/* Create the file with rw------- permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	if (close(fd) == -1)
		return (-1);

	return (1);
}
