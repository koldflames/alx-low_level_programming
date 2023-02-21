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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else if (n % 10 < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else if (n % 10 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
return (0);
}
