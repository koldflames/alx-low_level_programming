#include "main.h"
/**
 *print_alphabet - the entry point of the program
 *Description - prints the lowercase alphabets and a new line
 *Return: 0
 *Description: stops the program
 */
void print_alphabet_x10(void)
{
char letter = 'a';
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 26; j++)
{
_putchar(letter + j);
}
_putchar('\n');
}
}
