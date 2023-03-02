#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase in  a string
 * @str: The string to be changed
 * Return: Pointer to the changed string
 */
char *string_toupper(char *str)
{
	int indexer;

	for (indexer = 0; str[indexer]; indexer++)
	{
		if (str[indexer] >= 'a' && str[indexer] <= 'z')
		{
			str[indexer] -= 32;
		}
	}

	return (str);
}
