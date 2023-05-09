#include "main.h"

/**
 * main - the function copies content of a file to another file
 * @argc: this is the argument that is checked
 * @argv: this is the argument that is passed
 *
 * Return: this returns 1 if it succeeds, else it exits the program
 */

int main(int argc, char *argv[])
{
	int fd_src, fd_dest, num_read, num_write, close_src, close_dest;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);

	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((num_read = read(fd_src, buffer, 1024)) > 0)
	{
		num_write = write(fd_dest, buffer, num_read);
		if (num_write != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_src = close(fd_src);

	if (close_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	close_dest = close(fd_dest);
	if (close_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
