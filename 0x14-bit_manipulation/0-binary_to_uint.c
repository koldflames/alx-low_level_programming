#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an unsigned int
 * @b: string
 *
 * Return: this returns the result of the conversion done
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
