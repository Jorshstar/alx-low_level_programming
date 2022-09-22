#include "main.h"
/**
 * reverse_array - A string that flips an array
 * @a: Array  to be flipped
 * @n: This stands for number of elements in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, first, last, keep, counts;
	counts = n / 2;
	first = 0;
	last = n - 1;

	for (i = 0; i < counts; i++)
	{
		keep = a[first];
		a[first] = a[last];
		a[last] = keep;
		first++;
		last--;
	}
}
