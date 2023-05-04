#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */

int get_bit(unsigned long n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < sizeof(unsigned long) * 8; i++)
	{
		if (index == i)
		{
			return ((n >> i) & 1);
		}
	}
}
