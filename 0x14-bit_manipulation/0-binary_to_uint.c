#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an unsigned int
 * @binary: string
 *
 * Return: this returns the result of the conversion done
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int index = 0;

	if (binary == NULL)
		return (0);

	while (binary[i] != '\0')
	{
		while (binary[i] == '0' || binary[i] == '1')
		{
			result = result * 2 + (binary[i] - '0');
			i++;
		}
		if (binary[i] != '\0')
			return (0);
	}

	return (result);
}

