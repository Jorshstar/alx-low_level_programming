#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n: is a function that computes
 * Return: Absolute Value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}
