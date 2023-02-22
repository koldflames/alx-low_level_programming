#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the entry point of the program
 *Description - prints base 16
 *Return: 0
 *Description: stops the program
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i - 10 + 'a');
}
}
putchar('\n');
return (0);
}
