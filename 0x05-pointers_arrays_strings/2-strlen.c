#include "main.h"
#include <stdio.h>

/**
 * _strlen - entry point
 * @s: Takes in a string
 *i Description: Resturs the string length
 * Return: Returns the string length
 */
int _strlen(char *s)
{
	int sLong = 0;
	int stringLength;

	for (stringLength = 0; s[stringLength] != '\0'; stringLength++)
	{
		sLong++;
	}

	return (sLong);
}
