#include "main.h"
#include <stdio.h>
/**
 *times_table - the entry point of the program
 *Description - prints the 9 times table
 */
#include <stdio.h>

void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int product = i * j;
if (product < 10)
{
printf("  %d", product);
}
else if (product < 100)
{
printf(" %d", product);
}
else
{
printf("%d", product);
}
if (j < 9)
{
printf(",");
}
}
if (i < 9)
{
printf("\n");
}
}
printf("\n");
}
