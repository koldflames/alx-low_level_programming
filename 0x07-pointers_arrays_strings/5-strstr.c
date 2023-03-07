#include "main.h"

/**
 * *_strstr - locates a  substring
 * @haystack: string to be searched
 * @needle: string occurence to search for
 * Return: pointer at the beginning of the string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] ==  needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}

				i++;
			}
		}

		haystack++;
	}

	return ('\0');
}
