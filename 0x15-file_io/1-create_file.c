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
	FILE *fp;
	int ret_val = 1;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "w");

	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}
	fclose(fp);
	chmod(filename, S_IRUSR | S_IWUSR);
	return (ret_val);
}
