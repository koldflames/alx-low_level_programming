#include "main.h"

/**
 * *_memset - filing memory with constant byte
 * @s: pointer s
 * @b: constant byte to use
 * @n: first bytes tofill memory
 * Return: returns s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int integer;

	for (integer = 0; n > 0; integer++, n--)
	{
		s[integer] = b;
	}

	return (s);
}
