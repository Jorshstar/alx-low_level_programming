#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - A function that applies function to an array
 * @array: Array of ints
 * @size: paramater for the size of the array
 * @action: This is the pointer to the function to be applied
 * Return: Null Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
