#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - A function that creates an array of char
 * @size: A parameter for integer, the size of the array
 * @arr: A parameter for chat, which is the array
 * Return: if successsful, return pointer to the array, else null
 */
char *create_array(unsigned int size, char arr)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array_alloc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_alloc[i] = arr;

	return (array_alloc);
}
