#include "main.h"
#include <stdio.h>
/**
 *print_times_table - the entry point of the program
 *Description - prints the 9 times table
 *@n: the int
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
return;
}
int row = 0, col = 0, product = 0;
while (row <= n)
{
while (col <= n)
{
product = row * col;
printf("%-4d", product);
col++;
}
printf("\n");
col = 0;
row++;
}
}
