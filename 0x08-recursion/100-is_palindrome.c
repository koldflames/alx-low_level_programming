#include "main.h"

int is_palindrome(char *s);
int checking_palindrome(char *s, int l, int i);
int strlen_check(char *s);

/**
 * strlen_check - Returns the length of string chars
 * @s: String to measure
 *
 * Return: Length of string
 */
int  strlen_check(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += strlen_check(s + l);
	}

	return (l);
}

/**
 * checking_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * @l: s length
 * @i: index of the string to be checked
 *
 * Return: palindrome returns 1, if not 0
 */
int checking_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
	{
		return (1);
	}
	if (s[i] == s[l - i - 1])
	{
		return (checking_palindrome(s, l, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string we will check
 *
 * Return: for palindrome 1 if not palindrome 0.
 */
int is_palindrome(char *s)
{
	int  i = 0;

	int l = strlen_check(s);

	if (!(*s))
	{
		return (1);
	}

	return (checking_palindrome(s, l, i));
}
