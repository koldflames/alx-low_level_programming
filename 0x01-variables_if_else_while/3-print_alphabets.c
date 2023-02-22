#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the entry point of the program
 *Description - prints out sizes of each type
 *Return: 0
 *Description: stops the program
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
