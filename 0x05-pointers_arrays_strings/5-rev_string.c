#include "main.h"

/**
 * rev_string - prints a reversed string
 * @s: string that will be reversed
 * Description: reverses a string
 */
void rev_string(char *s)
{
	int length, index, halfer;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;

	index = 0;
	halfer = length / 2;

	while (halfer--)
	{
		temp = s[length - index - 1];
		s[length - index - 1] = s[index];
		s[index] = temp;
		index++;
	}
}
