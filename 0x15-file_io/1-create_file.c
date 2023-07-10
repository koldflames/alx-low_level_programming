#include "main.h"

/**
 * create_file - this function creates the file
 * @filename: the name of the file to be created.
 * @text_content: the content of the file
 *
 * Return: it returns 1 if it succeeds and -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int ret_val = 1;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			;
		}

		if (write(fd, text_content, i) != i)
		{
			return (-1);
		}
	}

	close(fd);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}

	return (ret_val);
}
