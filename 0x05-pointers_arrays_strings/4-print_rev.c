#include "main.h"

/**
 * print_rev - entry point
 * @s: character value to be worked on
 * Description: Prints a string in reverse
 */
void print_rev(char *s)
{
	int starter = 0;

	while (s[starter])
	{
		starter++;
	}

	while (starter--)
	{
		_putchar(s[starter]);
	}
	_putchar('\n');
}
