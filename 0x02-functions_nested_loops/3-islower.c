#include "main.h"
/**
 * _islower - function to  Check for lowercase characters
 * @c: This is what we use for the function islower
 * Return: 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
