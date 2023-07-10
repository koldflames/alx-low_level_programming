#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - name of the function
 * Description: reads a text file and prints it to the POSIX standard output
 * @filename: this is the name of the file to read
 * @letters: the number of letters the function should read and
 * print out to the standard output
 *
 * Return: the lenght/number of letters it read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	int i, j;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	i = read(fd, buffer, letters);

	if (i == -1)
	{
		free(buffer);
		return (0);
	}

	j = write(STDOUT_FILENO, buffer, i);

	if (j != i)
		return (0);
	free(buffer);
	close(fd);
	return (j);
}
