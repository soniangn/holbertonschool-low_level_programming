#include "main.h"

/**
 * check_prime - checks if the given number is prime
 * is_prime_number - entry point
 * @i: divider
 * @n: given number to check
 * Description: indicates if n is a prime number
 * Return: 1 is the input integer is a prime number,
 *          otherwise return 0
 */

int check_prime(int i, int n)
{
	if (n <= 0)
		return (0);
	if (n == i)
		return (0);
if (n % 2 == 0)
		return (0);
	if (i <= n / 2)
		return (1);
	else
		return (check_prime(i + 1, n));
}

/**
 * is_prime_number - entry point
 * @n: given number to check
 * Description: indicates if n is a prime number
 * Return: 1 is the input integer is a prime number,
 *          otherwise return 0
 */

int is_prime_number(int n)
{
	return (check_prime(1, n));
}

