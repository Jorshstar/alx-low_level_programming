#include "main.h"

/**
 * _isupper - this function checks for uppercase  characters
 * @c: This is the character to be tested
 * Getting tough but i stand strong
 * Return: 1 if c is uppercase, otherwise  0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
