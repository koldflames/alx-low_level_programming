#include "main.h"

/**
 * *_strncat - concatinates two strings
 * @dest: string of characters to be cocatinated
 * @src: characters concatinated to @dest
 * @n: maximum bytes from @src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int indexer = 0;
	int holder = 0;

	while (dest[indexer++])
	{
		holder++;
	}

	indexer = 0;

	while (src[indexer] && indexer < n)
	{
		dest[holder++] = src[indexer];
		indexer++;
	}


	return (dest);
}
