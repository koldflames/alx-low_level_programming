#include "main.h"

/**
 * _strpbrk - search a string of any of a set of bytes
 * @s: ocurence to be checked
 * @accept: sting to be searched
 * Return: Pointer to the byte s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
