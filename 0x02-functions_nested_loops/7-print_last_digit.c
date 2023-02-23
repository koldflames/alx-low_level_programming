#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - the entry point of the program
 *Description - prints the last digit
 *Return: 0
 *Description: stops the program
 *@n: function that prints last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
printf("%d", last_digit);
 return (last_digit);
}
