#include "main.h"

/**
 * puts2 - prints every other character
 * @str: your string goes here
 * Return: 0
 */

void puts2(char *str)
{
	int number = 0;

	while (str[number] != '\0')
	{
		if (number % 2 == 0)
		{
			_putchar(str[number]);
		}
		number++;
	}
	_putchar('\n');
}
