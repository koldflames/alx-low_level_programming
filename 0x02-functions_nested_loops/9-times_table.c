#include "main.h"
#include <stdio.h>
/**
 *times_table - the entry point of the program
 *Description - prints the 9 times table
 */
void times_table(void)
{
int i, j, product;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
product = i * j;
printf("%d\t", product);
}
printf("\n");
}
}
