#include "main.h"

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		while (*++s2 == '*')
			;
		if (*s2 == '\0')
			return (1);
		while (*s1 != '\0' && !wildcmp(s1++, s2))
			;
		return (*s1 != '\0');
	}

	if (*s1 != '\0' && (*s1 == *s2 || *s2 == '?'))
		return (wildcmp(++s1, ++s2));

	return (0);
}
