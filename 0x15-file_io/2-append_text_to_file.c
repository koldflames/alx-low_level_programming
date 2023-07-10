#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text content that is added to the file
 *
 * Return: this returns 1 if the file exists and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
    FILE *fd;
    int ret_val = 1;

    if (filename == NULL)
    {
        return (-1);
    }

    if (access(filename, W_OK) != 0)
    {
        return (-1);
    }

    if (text_content == NULL)
    {
        return (1);
    }

    fd = fopen(filename, "a");

    if (fd == NULL)
    {
        return (-1);
    }

    if (fprintf(fd, "%s", text_content) < 0)
    {
        ret_val = -1;
    }

    fclose(fd);
    return (ret_val);
}
