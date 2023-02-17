#include <stdio.h>

/**
 *main - the entry point of the program
 *Description - prints out sizes of each type
 *Return: 0
 *Description: stops the program
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
printf("Size of a float: %ld byte(s)\n", sizeof(float));

return (0);
}
