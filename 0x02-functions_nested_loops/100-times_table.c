#include "main.h"
#include <stdio.h>
/**
 *print_times_table - the entry point of the program
 *Description - prints the 9 times table
 *@n: the int
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
printf("%-4d", i*j);
}
printf("\n");
}
}
