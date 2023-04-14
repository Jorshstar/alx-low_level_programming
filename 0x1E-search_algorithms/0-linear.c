#include "search_algos.h"

/**
 * linear_search -This  searches for a value in an array of integers
 * @array: This is the pointer to the first element of the array to search in
 * @size: This is the number of elements in an array
 * @value: This is the value to search for
 *
 * Return: Function returns first index where value is located,
 * and  -1 if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);
}
return (-1);
}
