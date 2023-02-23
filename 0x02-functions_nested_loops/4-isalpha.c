#include "main.h"
/**
 *_isalpha - the entry point of the program
 *Description - checks if the char is lower or upper case
 *Return: 0
 *Description: stops the program
 *@c: function that checks for lower case character
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
