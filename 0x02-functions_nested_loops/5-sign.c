#include "main.h"
/**
 *print_sign - the entry point of the program
 *Description - prints the sign of a number
 *Return: 0
 *Description: stops the program
 *@n: function that checks for lower case character
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
