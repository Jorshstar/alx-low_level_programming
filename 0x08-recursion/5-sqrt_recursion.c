#include "main.h"

/**
 * _sqrt - A function that  returns the square root of a number
 * @n: parameter for the  sum
 * @y: parameter for buffer to be used
 * Return: 0
 */
int _sqrt(int n, int y)
{
	if (n == 1)
		return (1);
	else if (y == n || n < 0)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - Returns to the main program in _sqrt()
 * @n: the number
 * Return: An int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
