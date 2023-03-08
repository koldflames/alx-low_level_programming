#include "main.h"

int divisible(int n, int d);
int is_prime_number(int n);

/**
 * is_prime_number - function hat returns 1 for prime number
 * @n: integer to check for prime number
 * Return: 0 or 1 if prime and not prime
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (divisible(n, d));
}

/**
 * divisible - checks for number divisibility
 * @n: checking integer
 * @d: divisors
 *
 * Return: Number is divisible will be 0
 * Number not divisible will be 1
 */
int divisible(int n, int d)
{
	if  (n % d == 0)
	{
		return (0);
	}

	if (d == n / 2)
	{
		return (1);
	}

	return (divisible(n, d + 1));
}
