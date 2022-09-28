#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x
 * @x: paramater for the  base
 * @y: paramater for the  exponet
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
