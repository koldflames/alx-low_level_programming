#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 *
 * Return: Pointer to the enoded string.
 */
char *leet(char *str)
{
	int indexer1, indexer2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (indexer1 = 0; str[indexer1]; indexer1++)
	{
		indexer2 = 0;
		while (indexer2 <= 7)
		{
			if (str[indexer1] == leet[indexer2] || str[indexer1] -32 == leet[indexer2])
			{
				str[indexer1] = indexer2 + '0';
			}

		
		}
		indexer1++;
	}
	return (str);

}
