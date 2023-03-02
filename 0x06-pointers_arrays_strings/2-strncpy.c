#include "main.h"

/**
 * _strncpy - function that copies a string
 * Description: Copies from str to dest
 * @dest: The buffer storing the string copy
 * @src: The string source
 * @n: Maximum number of bytes copied from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int indexer, src_length;

	indexer = 0;
	src_length = 0;

	while (src[indexer++])
	{
		src_length++;
	}

	indexer = 0;

	while (src[indexer] && indexer < n)
	{
		dest[indexer] = src[indexer];
		indexer++;
	}

	indexer = src_length;

	while (indexer < n)
	{
		dest[indexer] = '\0';
		indexer++;
	}


	return (dest);
}
