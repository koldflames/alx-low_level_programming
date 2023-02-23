#include "main.h"
/**
 *_islower - the entry point of the program
 *Description - prints the lowercase alphabets and a new line
 *Return: 0
 *Description: stops the program
 *@c: function that checks for lower case character
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
