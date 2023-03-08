#include "main.h"

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		/* skip multiple * characters in s2 */
		while (*(s2 + 1) == '*')
			s2++;

		/* try all possibilities of matching * in s1 */
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}

		/* if none of the possibilities work, return 0 */
		return (wildcmp(s1, s2 + 1));
	}

	if (*s1 != '\0' && (*s1 == *s2 || *s2 == '?'))
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
