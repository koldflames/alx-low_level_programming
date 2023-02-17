#include <stdio.h>

/**
 *main - the entry point of the program
 *Description - prints out sizes of each type
 *Return: 0
 *Description: stops the program
 */
int main(void)
{
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of long: %ld byte(s)\n", sizeof(long));
printf("Size of long long: %ld byte(s)\n", sizeof(long long));
printf("Size of float: %ld byte(s)\n", sizeof(float));

return (0);
}
