#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the entry point of the program
 *Description - prints alphabets except q and e
 *Return: 0
 *Description: stops the program
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
