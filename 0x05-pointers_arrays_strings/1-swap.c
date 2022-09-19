#include "main.h"

/**
 * swap_int - A function that swaps the value of two integers
 * We dealing with Arrays and Strings now
 * @a: parameter for the first integer
 * @b: parameter for the 2nd integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
