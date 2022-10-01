#include "main.h"

/**
 * _isdigit - this function checks for digits characters
 * @c: this is for testing the characters
 * we moving
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
