#include "main.h"
/**
 * check - functiont help me to check
 * @n: is first paramater
 * @i: is second paramater
 * Return: prime number
*/

int check(int n, int i)
{
	if (i >= n && n >= 2)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check(n, i + 1));
}


/**
 * is_prime_number - Check if the number is prime or not
 * @n: is the number
 * Return: 1 if prime and 0 if not
*/

int is_prime_number(int n)
{
	return (check(n, 2));
}
