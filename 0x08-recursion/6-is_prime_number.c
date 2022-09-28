#include "main.h"

/**
 * is_prime - A function that checks for  prime or not
 * @n: parameter for number
 * @y: parameter for buffer
 * Return: 0
 */
int is_prime(int n, int y)
{
	if (n == 1)
		return (0);
	else if (n % y == 0 && y != n && y != 1)
		return (0);
	else if (n % y == 0 && y == n)
		return (1);
	else
		return (is_prime(n, y + 1));
}

/**
 * is_prime_number -  A function that checks  prime or not to main
 * @n: parameter for number
 * Return: 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
