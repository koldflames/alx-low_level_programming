#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatinates arguments into the program
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: If ac == 0 , av == NULL, or function fail (NULL)
 *If pass string pointer (success)
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, length = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (a < ac)
	{
		for (b = 0; av[a][b]; b++)
		{
			length++;
		}
		a++;
	}

	str = malloc(sizeof(char) * length + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[i++] = av[a][b];
		}
		str[i++] = '\n';
	}

	str[length] = '\0';

	return (str);
}
