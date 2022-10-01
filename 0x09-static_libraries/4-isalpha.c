#include "main.h"
/**
 * _isalpha - A function that check for alphabet characters
 * @c: we use this to check for the alphabet characters
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
