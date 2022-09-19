#include "main.h"

/**
 * swap_int - A function that swaps the value of two integers
 * We dealing with Arrays and Strings now
 * @u: parameter for the first integer
 * @v: parameter for the 2nd integer
 * Return: void
 */
void swap_int(int *u, int *v)
{
	int swp = *u;
	*u = *v;
	*v = swp;
}
