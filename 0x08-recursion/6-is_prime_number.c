#include "holberton.h"
int checkPrime(int n, int i);
/**
 * is_prime_number - function that checks for prime numbers
 * @n: numbert to evaluate
 * Return: 1 if is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkPrime(n, 2));
}

/**
 * checkPrime - function that check if a number is prime
 * @n: number
 * @i: counter
 * Return: 0, 1 or the counter
 */

int checkPrime(int n, int i)
{
	if (i == (n / 2) + 1)
		return (1);
	if (n % i == 0)
		return (0);

		i = checkPrime(n, i + 1);
	return (i);
}
