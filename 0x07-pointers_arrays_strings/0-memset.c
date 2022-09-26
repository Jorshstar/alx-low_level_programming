#include "main.h"

/**
 * main - write a function that fills memory with a constant byte
 * memset- fills the first n bytes of the memory area
 * @s - paramater for address to memory block
 * @b - paramater for character to be used
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
