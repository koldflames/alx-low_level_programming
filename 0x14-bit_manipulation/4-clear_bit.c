#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0 at a given index
 * @n: the parameter to check
 * @index: index
 * Return: returns the value of the bit if it succeeds and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
