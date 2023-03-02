#include "main.h"

/**
 * *_strcat - concatinates two strings.
 * @src: source string to add to @dest.
 * @dest: string to concating.
 * Return: a pointer resulting to the string.
 */
char *_strcat(char *dest, char *src)
{
	int holder = 0;
	int length = 0;

	while (dest[holder++])
	{
		length++;
	}

	holder = 0;
	while (src[holder])
	{
		dest[length++] = src[holder];
		holder++;
	}

	return (dest);
}
