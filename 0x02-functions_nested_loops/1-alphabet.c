#include "main.h"
/**
 *main - the entry point of the program
 *Description - prints out sizes of each type
 *Return: 0
 *Description: stops the program
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
