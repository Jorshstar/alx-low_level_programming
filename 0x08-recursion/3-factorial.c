#include "main.h"

/**
 * factorial - A function that returns the factorial of a number
 * @n: paramater to find its factorial
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
