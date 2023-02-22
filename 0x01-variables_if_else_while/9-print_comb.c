#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the entry point of the program
 *Description - prints comb
 *Return: 0
 *Description: stops the program
 */
int main(void)
{
int i, j, k, l;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
putchar(',');
putchar(' ');
for (j = i + 1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(',');
putchar(' ');
for (k = j + 1; k < 10; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
putchar(',');
putchar(' ');
for (l = k + 1; l < 10; l++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
putchar('0' + l);
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
