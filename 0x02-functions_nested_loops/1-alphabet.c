#include "main.h"
/**
 *print_alphabet - the entry point of the program
 *Description - prints the lowercase alphabets and a new line
 *Return: 0
 *Description: stops the program
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
