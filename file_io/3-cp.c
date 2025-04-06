#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int open_source_file(const char *filename);
int open_destination_file(const char *filename);
void copy_file_content(int fd_from, int fd_to);
void close_files(int fd_from, int fd_to);

/**
 * main - copies the content of one file to another
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 * Return: 0 on success, exits with an error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open_source_file(argv[1]);
	fd_to = open_destination_file(argv[2]);
	copy_file_content(fd_from, fd_to);
	close_files(fd_from, fd_to);

	return (0);
}

/**
 * open_source_file - opens the source file for reading
 * @filename: the name of the file to open
 * Return: file descriptor on success, -1 on failure
 */
int open_source_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_destination_file - opens the destination file for writing
 * @filename: the name of the file to open
 * Return: file descriptor on success, -1 on failure
 */
int open_destination_file(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * copy_file_content - copies content from the source to the destination
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 */
void copy_file_content(int fd_from, int fd_to)
{
	int r, w;
	char buffer[1024];

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_files - closes the file descriptors
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
