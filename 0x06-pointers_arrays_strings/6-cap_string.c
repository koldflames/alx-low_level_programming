#include "main.h"

/**
 * cap_string - capitalizes letters of a string
 * @str: String to capitalize
 * Return: A pointer to the chagned string
 */
char *cap_string(char *str)
{
	int indexer;

	indexer = 0;

	while (str[indexer])
	{
		while (!(str[indexer] >= 'a' && str[indexer] <= 'z'))
			indexer++;

		if (str[indexer - 1] == ' ' ||
		    str[indexer - 1] == '\t' ||
		    str[indexer - 1] == '\n' ||
		    str[indexer - 1] == ',' ||
		    str[indexer - 1] == ';' ||
		    str[indexer - 1] == '.' ||
		    str[indexer - 1] == '!' ||
		    str[indexer - 1] == '?' ||
		    str[indexer - 1] == '"' ||
		    str[indexer - 1] == '(' ||
		    str[indexer - 1] == ')' ||
		    str[indexer - 1] == '{' ||
		    str[indexer - 1] == '}' ||
		    indexer == 0)
			str[indexer] -= 32;

		indexer++;
	}

	return (str);
}
